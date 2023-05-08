#include "main.h"
char *crate_buff(char *file);
void close_f(int fd);
/**
 * create_buffer - creates 1024 bytes for buffer
 * @file: name of the file
 * Return: pointer to buffer
 */
char *crate_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_f - closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_f(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * cp_file - copies the contents of a file to another file.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 * Return: 0 (success)
 */
int cp_file(int argc, char *argv[])
{
	int a;
	int b;
	int r;
	int w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = crate_buff(argv[2]);
	a = open(argv[1], O_RDONLY);
	r = read(a, buff, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(a, buff, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_file(a);
	close_file(b);
	return (0);
}
