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
    int fileopen, text_length, filewrite;

    if (filename == NULL)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        for (text_length = 0; text_content[text_length];)
        {
            text_length++;
        }
    }

    fileopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    filewrite = write(fileopen, text_content, text_length);
    if (filewrite == -1 || fileopen == -1)
    {
        return (-1);
    }

    close(fileopen);
    return (1);
}
