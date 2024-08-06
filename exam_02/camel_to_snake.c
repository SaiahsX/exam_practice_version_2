#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
    int	i;

	i = 0;
	if (ac == 2)
	{
        while (av[1][i] != '\0')
        {
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				ft_putchar('_');
				av[1][i] += 32;
			}
			ft_putchar(av[1][i]);
            i++;
        }
	}
	ft_putchar('\n');
    return (0);
}