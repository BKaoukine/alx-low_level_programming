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
	ssize_t fopen, fread, fwrite;
	char *fileBuff;

	if (filename == NULL)
		return (0);

	fopen = open(filename, O_RDONLY); /*Opening the File*/
	if (fopen == -1)
		return (0);

/*Allocating memory for the buffer*/
	fileBuff = malloc(sizeof(char) * letters);

/*Reading from the file*/
	fread = read(fopen, fileBuff, letters);

/*Writing required size into STDOUT*/
	fwrite = write(STDOUT_FILENO, fileBuff, fread);


	free(fileBuff);
	close(fopen);
	return (fwrite);

}
