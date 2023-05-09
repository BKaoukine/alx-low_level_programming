#include "main.h"

/**
 * create_file - Strating Point
 * @filename: the file to create
 * @text_content: text to write into the file created
 *
 * Description: create a file and write text into it
 * Return: 1 on Succes or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fo, textlenght, fw;

	if (filename == NULL)
	{
		printf("error 1");
		return (-1);
	}

if (text_content != NULL)
{
	for (textlenght = 0; text_content[textlenght];)
	{
		textlenght++;
	}
}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fo, filename, textlenght);
	if (fo == -1 || fw == -1)
	{
		return (-1);
	}

	close(fo);
	return (1);

}
