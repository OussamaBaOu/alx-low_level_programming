#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it
 * to the POSIX standard output.
 * @filename: text file
 * @letters: number of letters
 * Return: the actual number of letters
 * it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t c;
	ssize_t d;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	d = read(b, a, letters);
	c = write(STDOUT_FILENO, a, d);
	free(a);
	close(b);
	return (c);
}
