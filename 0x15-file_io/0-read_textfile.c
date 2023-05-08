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
	ssize_t fo, fr, fw;
	char *c;

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	fr = read(fo, c, letters);
	fw = write(STDOUT_FILENO, c, fr);

	free(c);
	close(fo);
	return (fw);

}
