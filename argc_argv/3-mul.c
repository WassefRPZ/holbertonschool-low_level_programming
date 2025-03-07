#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplie deux nombres passés en argument
 * @argc: Le nombre d'arguments de la ligne de commande
 * @argv: Le tableau des arguments de la ligne de commande
 *
 * Return: 0 si le programme s'est exécuté correctement, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int j;
	int i;
	int r;

	if (argc != 3)
	{
		printf("error\n");
		return (1);

	}

	j = atoi(argv[1]);

	i = atoi(argv[2]);

	r  = i * j;
	printf("%d\n", r);

return (0);
}
