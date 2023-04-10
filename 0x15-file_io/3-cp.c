#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * closefd_errck - prints error message and exits if cannot close file
 * @fd: file descriptor to close
 * Return: 0 0r -1
 */
int closefd_errck(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * write_errck - prints error message and exits if can't write to file_to
 * @fd1: file descriptor 1 to close
 * @fd2: file descriptor 2 to close
 * @c: file printing the error
 */
int write_errck(int fd1, int fd2, char *c)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", c);
	closefd_errck(fd1);
	closefd_errck(fd2);
	return (99);
}
/**
 * read_errck - prints error message and exits if file_from can't be read
 * @fd1: file descriptor 1 to close
 * @fd2: file descriptor 2 to close
 * @c: file printing the error
 */
int read_errck(int fd1, int fd2, char *c)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", c);
	closefd_errck(fd1);
	closefd_errck(fd2);
	return (98);
}
/**
 * main - a function that copies the content of a file to another file
 * @argc: number of args
 * @argv: list of args
 * Return: 97 if the number of argument is not the correct one,
 *         98 if file_from does not exist, or if you can not read it
 *         99 if you can not create or if write to file_to fails
 *         100 if you can not close a file descriptor
 */
int main(int argc, char *argv[])
{
	int size_r, size_w, file_from, file_to, err;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closefd_errck(file_from);
		return (99);
	}
	while (size_r == 1024)
	{
		size_r = read(file_from, buf, 1024);
		if (size_r == -1)
			return(read_errck(file_from, file_to, argv[1]));
		size_w = write(file_to, buf, size_r);
		if (size_w == -1 || size_w != size_r)
			return(write_errck(file_from, file_to, argv[2]));
	}
	err = closefd_errck(file_from);
	err += closefd_errck(file_to);
	if (err != 0)
		return (100);
	return (0);
}
