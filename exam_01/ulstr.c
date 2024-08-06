#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c-= 32;
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c+= 32;
	return (c);
}

int main(int ac, char *av[])
{
    int	i;

	i = 0;
	if (ac == 2)
	{
        while (av[1][i] != '\0')
        {
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(ft_toupper(av[1][i]));
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar(ft_tolower(av[1][i]));
			else
				ft_putchar(av[1][i]);
			i++;
        }
	}
	ft_putchar('\n');
    return (0);
}