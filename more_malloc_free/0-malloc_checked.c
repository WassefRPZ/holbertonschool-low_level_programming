#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
        int *mano;

        mano = malloc(b);

        if (mano == NULL)
        {
                exit(98);

        }

        return (mano);

}
