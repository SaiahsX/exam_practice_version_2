#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char c, int pos)
{
	while (pos >= 0)
	{
		ft_putchar(c);
		pos--;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	pos;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				pos = av[1][i] - 'A';
				repeat_alpha(av[1][i], pos);
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				pos = av[1][i] - 'a';
				repeat_alpha(av[1][i], pos);
			}
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}