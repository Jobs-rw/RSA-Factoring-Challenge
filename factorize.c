#include "factor.h"

/**
 * factorize - The function factorizes a number
 * @buffer: Pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{
        u_int32_t num;
        u_int32_t i;

        num = atoi(buffer);
        i = 2;

        while (i < num)
        {
                if (num % i == 0)
                {
                        printf("%d = %d * %d\n", num, num / i, i);
                        break;
                }
                i++;
        }

        return 0;
}
