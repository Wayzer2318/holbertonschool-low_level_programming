#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
