#include <unistd.h>
#include <stdio.h>
#include <string.h>

ssize_t ft_strcspn(const char *str, const char *reject)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (str[i])
    {
        while (reject[j])
        {
            if(reject[j] == str[i])
                return(i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}