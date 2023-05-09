#include "main.h"
/**
 * cpfile - Starting Point
 * @argc: number of argument passed to the program
 * @argv: pointer to the array that holds arguments passed to the program
 * Description: copies content from file 1 to file 2
 */
void cpfile(int argc, char *argv[])
{
char *error, mybuffer[MY_BUFFER_SIZE];
int fileopen, fileopento, bytes_read, bytes_written;

if (argc != 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}

fileopen = open(argv[1], O_RDONLY);
if (fileopen == -1)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fileopento = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fileopento == -1)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}

while ((bytes_read = read(fileopen, mybuffer, MY_BUFFER_SIZE)) > 0)
{
bytes_written = write(fileopento, mybuffer, bytes_read);
if (bytes_written == -1)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (bytes_read == -1)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (close(fileopen) == -1)
{
printf("Error: Can't close fd %d\n", fileopen);
exit(100);
}

if (close(fileopento) == -1)
{
printf("Error: Can't close fd %d\n", fileopento);
exit(100);
}
}
