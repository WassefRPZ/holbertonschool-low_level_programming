#include <stdio.h>
/**
 * main - Affiche le nombre d'arguments passes au programme
 * @argc: Le nombre d'arguments passes (y compris le nom du programme)
 * @argv: Tableau de cha  nes contenant les arguments passes au programme
 *
 * Return: Retourne 0 (indique une execution reussie)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
