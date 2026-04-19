#include <unistd.h>

int main(int argc, char **argv)
{
    int     i;
    int     end;
    char    *str;

    if (argc == 2)
    {
        str = argv[1];
        i = 0;
        while (str[i])          // llega al final de la string
            i++;
        while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            i--;                // salta espacios finales hacia atrás
        end = i;                // aquí termina la última palabra
        while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
            i--;                // sigue hacia atrás hasta encontrar espacio
        while (i < end)         // imprime desde el inicio hasta el final
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}