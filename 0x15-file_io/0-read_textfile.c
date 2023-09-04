#include <main.h>

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


	fileBuff = malloc(sizeof(char) * letters);/*Allocating memory for the buffer*/
	fread = read(fopen, fileBuff, letters);/*Reading from the file*/
	fwrite = write(STDOUT_FILENO, fileBuff, fread);/*Writing required size into STDOUT*/


	free(fileBuff);
	close(fopen);
	return (fwrite);

}
