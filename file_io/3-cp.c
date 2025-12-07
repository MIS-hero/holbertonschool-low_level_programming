#include "main.h"
/**
* my_strlen - calculates the length of a string.
* @s: pointer to the string.
* Return: length of the string.
*/
size_t my_strlen(char *s)
{
	size_t len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
* append_text_to_file - appends text at the end of a file.
* @filename: pointer to the name of the file.
* @text_content: pointer to the string to add to the end of the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t bytes_written;
	size_t len;

	if (filename == NULL)
		return (-1);

	/* Open existing file for writing in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, just check file exists */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = my_strlen(text_content);

	bytes_written = write(fd, text_content, len);
	if (bytes_written != (ssize_t)len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
