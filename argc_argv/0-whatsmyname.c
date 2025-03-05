#include <stdio.h>
#include <stdlib.h>
/**
 * main - Affiche le nom du programme exécuté
 * @argc: Nombre d'arguments (non utilisé ici)
 * @argv: Tableau des arguments (non utilisé ici)
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
