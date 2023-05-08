#include "main.h"

/**
 * create_file - creates a file in a specified name and content
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fb;
	int nletters;
	int rwf;

	if (!filename)
		return (-1);

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fb == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwf = write(fd, text_content, nletters);

	if (rwf == -1)
		return (-1);

	close(fb);

	return (1);
}
