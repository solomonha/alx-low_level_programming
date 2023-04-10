#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: a file which it needs to read and print
 * @letters:  is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ch;
	size_t n1, n2;

	ch = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n1 = read(fd, ch, letters);
	n2 = write(STDOUT_FILENO, ch, n1);
	close(fd);
	return (n2);

}
