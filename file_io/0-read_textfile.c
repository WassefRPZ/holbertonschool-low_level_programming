#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
* read_textfile - Lit un fichier texte et l'imprime sur la sortie standard
* @filename: Nom du fichier à lire
* @letters: Nombre de lettres à lire et imprimer
*
* Return: Nombre de lettres lues et imprimées, 0 en cas d'échec
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;

	int file_descrip;

	ssize_t read_count;
	ssize_t write_count;


	if (filename == NULL)
	return (0);

	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descrip);
		return (0);
	}

	read_count = read(file_descrip, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(file_descrip);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);

	free(buffer);
	close(file_descrip);

	if (write_count == -1 || write_count != read_count)
	return (0);

	return (write_count);

}
