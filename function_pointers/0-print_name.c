#include <stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 * print_name - Fonction qui appelle une autre fonction pour traiter un nom
 * @name: Pointeur vers une chaîne de caractères représentant le nom
 * @f: Pointeur vers une fonction qui prend un char * en paramètre
 *
 * Cette fonction vérifie si les paramètres `name` et `f` ne sont pas NULL.
 * Si les deux sont valides, elle appelle la fonction pointée par `f` en lui
 * passant `name` comme argument.
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
		f(name);
}
