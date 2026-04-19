#include <unistd.h>

int main(int argc, char *argv[])
{
    int     i;
    int     j;
    char    *str1;
    char    *str2;

    if (argc != 3)
        return (write(1, "\n", 1), 0);
    str1 = argv[1];
    str2 = argv[2];
    i = 0;
    while (str1[i])
    {
        j = 0;
        while (str1[j] != str1[i])  // busca primera aparición en str1
            j++;
        if (j == i)                  // confirmamos si es la primera vez que aparece
        {
            j = 0;
            while (str2[j] && str2[j] != str1[i])  // busca en str2
                j++;
            if (str2[j] == str1[i])                 // confirmamos si está en str2
                write(1, &str1[i], 1);
        }
        i++;                // avanzamos la posición de la string que nos importa
    }
    write(1, "\n", 1);
    return (0);
}