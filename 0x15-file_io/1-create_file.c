#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: content written in the file
 *
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
