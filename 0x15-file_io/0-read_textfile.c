#include "main.h"
/**
 * read_textfile - takes a text file and prints
 *
 * @filename: file name
 * @letters: letters to be printed
 * Return: count of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft;
	ssize_t rd;
	char *store;

	if (filename == NULL)
		return (0);
	ft = open(filename, O_RDONLY);
	if (ft == -1)
		return (0);
	store = malloc(sizeof(char) * letters);
	if (store == NULL)
		return (0);
	rd = read(ft, store, letters);
	if (rd == -1)
	{
		return (0);
	}
	rd = write(STDOUT_FILENO, store, rd);
	if (rd == -1)
		return (0);
	free(store);
	close(ft);
	return (rd);
}
