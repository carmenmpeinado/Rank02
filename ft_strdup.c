#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int     i;
    char    *dest;

    i = 0;
    while (src[i])
        i++;
    dest = malloc(sizeof (char) * (i + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}