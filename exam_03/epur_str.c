#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int ac, char *av[])
{
    int i;
    int k;
    int start;
    int end;
    int len;

    i = 0;
    k = 0;
    start = 0;
    end = 0;
    len = ft_strlen(av[1]);
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            while (av[1][start] == ' ' || av[1][start] == '\t')
                start ++;
            end = start;
            while (av[1][end] != ' ' && av[1][end] != '\t' && av[1][end] != '\0')
                end ++;
            k = start;
            while (k < end)
            {
                ft_putchar(av[1][k]);
                k ++;
            }
            // if (av[1][end] == '\0')
            if (av[1][end] <= len - 1)
                break;
            else
                write (1, " ", 1);
            start = end;
            i++;
        }
    }
    ft_putchar ('\n');
    return (0);
}