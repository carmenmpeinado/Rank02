#include <stdio.h>

int is_power_of_2(unsigned int nb)
{
    if (nb == 0)
        return (0);
    while (nb > 1)
    {
        if (nb % 2 == 0)
            nb = nb / 2;
        else
            return (0);
    }
    return (0);
}