#include "shell.h"


/* cmd = vect_arr_generator(line_buffer, chars_in_line);*/

char **vect_arr_generator(char *buffer)
{
	char **vect_arr = NULL;
	char *line_copy = NULL, /*line_ptr = NULL,*/ *string_ptr = NULL;
	size_t i = 0;
	int num_strings = 0;
	char *delim = " \t:";

	/* duplicate line to use a local copy vs original */
	line_copy = strdup(buffer);
	if(line_copy == NULL)
		return (NULL);
	/* !!!strdup does a malloc that needs to be freed!!! */

	/*count to number of strings that will be creates by strtok*/
/*	line_ptr = line_copy;
	free(line_copy);*/
	while (*line_copy != '\0')
	{
		if (*line_copy == ' ')
			num_strings++;
		line_copy++;
	}
	num_strings += 1;
	printf("%d\n", num_strings);


	/* !!!malloc space for the vector array to be created!!! */
	vect_arr = malloc(sizeof(char *) * (num_strings + 1));
	if (vect_arr == NULL)
	{
		free(line_copy);
		return (NULL);
	}
	/*tokeninze line and create vector array*/
	string_ptr = strtok(line_copy, delim);
	while (*line_copy)
	{
		/* !!!strdup mallocs space for strings and must be freed!!! */
		vect_arr[i] = strdup(string_ptr);
		if (vect_arr[i] == NULL)
		{
			free(vect_arr);
			return (NULL);
		}
		string_ptr = strtok(NULL, delim);
		i++;
		line_copy++;
	}
	vect_arr[i] = NULL;
	while (*vect_arr)
		printf("%s\n", vect_arr[i]);
/*	printf("%s\n", buffer);*/

/*
idx = 0;
while (path[idx])
{
	idx++;
}

while (tokens[idx])
{
	free(tokens[idx]);
	idx++;
}
free(tokens);*/
	return (vect_arr);
}
