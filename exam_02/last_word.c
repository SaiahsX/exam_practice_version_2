#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
    int	i;
    int end;

	i = 0;
    end = 0;
	if (ac == 2)
	{
        while (av[1][i] != '\0')
        {
            i++;
        }
        i--;
        while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
        {
            i--;
        }
        end = i;
        while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
        {
            i--;
        }
        i++;
        while (i <= end)
        // while (av[1][i] != '\0' && (av[1][i] != ' ' && av[1][i] != '\t'))
        {
            ft_putchar(av[1][i]);
            i++;
        }
	}
	ft_putchar('\n');
    return (0);
}