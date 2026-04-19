#include <unistd.h>

int already_seen(char c, char **argv, int i1, int i2)
{
    int i;

    i = 0;
    while (i < i1)
    {
        if (argv[1][i] == c)
            return (1);
        i++;
    }
    i = 0;
    while (i < i2)
    {
        if (argv[2][i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (!already_seen(argv[1][i], argv, i, 0))
                write(1, &argv[1][i], 1);
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            if (!already_seen(argv[2][i], argv, -1, i))
                write(1, &argv[2][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}