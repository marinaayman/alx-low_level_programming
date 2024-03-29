#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1, If the function fails.
 *          1, Otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w_bytes = write(fd, text_content, len);

	if (fd == -1 || w_bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
