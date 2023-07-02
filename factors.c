#include "factor.h"
#include <stdio.h>
#include <stdlib.h>

void factorize(unsigned int num)
{
    unsigned int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%u = %u * %u\n", num, i, num / i);
            return;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: factors <file>\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Failed to open file '%s'\n", argv[1]);
        return 1;
    }

    unsigned int number;
    while (fscanf(file, "%u\n", &number) == 1)
    {
        factorize(number);
    }

    fclose(file);
    return 0;
}

