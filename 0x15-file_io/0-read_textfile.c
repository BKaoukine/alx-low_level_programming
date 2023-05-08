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
	int fo, fw;
	long unsigned int i;
	char *c;

	fo = open(filename, O_RDONLY);
	c = malloc(letters * sizeof(char));
	fw = read(fo, c, letters);

	if (fo == -1 || filename == NULL || fw < 0)
	{
		return (0);
	}

	for (i = 0; i <= letters; i++)
	{
		_putchar(*c);
	}

	return (fw);

}
