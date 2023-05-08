#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The name of the file to read.
 * @letters: numbers of letters printed.
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fb = open(filename, O_RDONLY);

	if (fb == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fb, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fb);

	free(buf);

	return (nwr);
}
