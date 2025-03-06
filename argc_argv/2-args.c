#include <stdio.h>
#include <stdlib.h>
/**
 * main - Affiche le nom du programme executé
 * @argc: Nombre d'arguments (non utilisé ici)
 * @argv: Tableau des arguments (non utilisé ici)
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);

	return (0);
}
