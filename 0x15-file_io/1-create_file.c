#include "main.h"

/**
 * create_file - Starting Point
 * @filename: the file to create
 * @text_content: text to write into the file created
 *
 * Description: create a file and write text into it
 * Return: 1 on Success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, textLenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (textLenght = 0; text_content[textLenght];)
			textLenght++;
	}

	fileOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fileWrite = write(fileOpen, text_content, textLenght);

	if (fileOpen == -1 || fileWrite == -1)
		return (-1);

	close(fileOpen);

	return (1);
}
