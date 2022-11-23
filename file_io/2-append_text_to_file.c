#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, strlen(text_content));
	close(fd);
	if (wr == -1)
		return (-1);

	return (1);
}
