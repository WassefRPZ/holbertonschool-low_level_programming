#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - Point d'entrée du programme
* @argc: Nombre d'arguments
* @argv: Tableau des arguments
*
* Return: 0 en cas de succès, ou un code d'erreur
*/
int main(int argc, char *argv[])
{

		int (*opera)(int, int);
	    int num1, num2;

    

if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
    

    opera = get_op_func(argv[2]);
    if (opera == NULL)
    {
        printf("Error\n");
		exit(99);
    }

printf("%d\n", opera(num1, num2));
return (0);

}
