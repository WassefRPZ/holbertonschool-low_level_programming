#include "main.h"


char *cap_string(char *str)
{
    int i = 0, c;
    int trigger = 0;
    char nots[] = ",;.!?(){}\n\t\" ";

    while (str[i] != '\0')
    {
        if (i == 0 || trigger == 1)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32; 
                trigger = 0;  
            }
        }

        c = 0;
        while (nots[c] != '\0')
        {
            if (nots[c] == str[i])
            {
                trigger = 1;
            }
            c++;
        }

        i++;
    }

    return str;
}
