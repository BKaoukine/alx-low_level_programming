#include "main.h"
/**
 * close_file - Closes file descriptors.
 * @file: The file descriptor to be closed.
 */
void close_file(int file)
{
	int fileToClose;

	fileToClose = close(file);

	if (fileToClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
