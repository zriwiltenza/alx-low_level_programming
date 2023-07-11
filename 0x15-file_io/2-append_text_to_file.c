#include "main.h"

/**
 * append_text_to_file - text that is added at the conclusion of a file.
 * @filename: a pointing device to the file's name.
 * @text_content: the string that should be appended to the file's end.
 *
 * Return: Whenever a function fails when a filename contains a NULL - -1.
 *        If the file is missing, the user doesn't have write access. - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
