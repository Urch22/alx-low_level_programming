#include "main.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Function parameter 1
 * @letters: Function parameter 2
 * Return: The actual number of letters it could read and
 * print if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n, m;
	char *buffer;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n = read(i, buffer, letters);
	m = write(STDOUT_FILENO, buffer, n);

	close(i);

	free(buffer);

	return (m);
}
