#include "main.h"

/**
 * read_textfile - Strating Point
 * @filename: the file to read
 * @letters: number of bytes to read
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 * Return: number of bytes printed on Succes or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, i;
	char *c;

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	c = malloc(letters);
	if (c == NULL)
	{
		close(fo);
		return (0);
	}

	fr = read(fo, c, letters);

	if (fr == -1)
	{
		free(c);
		close(fo);
		return (0);
	}

	for (i = 0; i < fr; i++)
		_putchar(c[i]);


	free(c);
	close(fo);
	return (fr);

}
