#include "main.h"
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments given to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int cpFrom, cpTo, readFrom, writeTo;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	cpFrom = open(argv[1], O_RDONLY);
	readFrom = read(cpFrom, buffer, 1024);
	cpTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cpFrom == -1 || readFrom == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeTo = write(cpTo, buffer, readFrom);
		if (cpTo == -1 || writeTo == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readFrom = read(cpFrom, buffer, 1024);
		cpTo = open(argv[2], O_WRONLY | O_APPEND);
	} while (readFrom > 0);

	free(buffer);
	close_file(cpFrom);
	close_file(cpTo);

	return (0);
}
