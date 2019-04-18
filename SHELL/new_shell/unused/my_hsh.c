#include "shell.h"


int main (int argc, char *argv[], char *envp[])
{
        char *buffer = NULL;
        size_t bufsize = 0;
        pid_t newProcess;
        ssize_t charCount;
        int status = 0, index = 0;
        char **cmd;

        if (argc < 1)
                return (-1);
/*        signal(SIGINT, sighandle);*/
        while (1)
        {
                write(STDERR_FILENO, "($) ", 4);
                charCount = getline(&buffer, &bufsize, stdin);
                if (charCount < 0)
                        break;
                if (buffer[charCount - 1] == '\n')
                        buffer[charCount - 1]  = '\0';
                cmd = token_maker(buffer);
                newProcess = fork();
                if (newProcess < 0)
                        perror(argv[0]);
                if (newProcess == 0)
                {
                        execve(cmd[0], cmd, envp);
                        perror(argv[0]);
                }
                else
                        wait(&status);
        }
        if (charCount < 0)
                write(STDERR_FILENO, "\n", 1);
        free(buffer);
        while(cmd[index])
        {
                free(cmd[index]);
                index++;
        }
        free(cmd);
        return (0);
}
