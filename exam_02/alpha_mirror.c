#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

// instead of subtracting 25 from the index (av[1][i] - 'a') as we did in rotone.c.
// it gives us negative values resulting in wrong index result, we dont want that.
// we subtract the index (av[1][i] - 'a') from 25, Thus helping us mirror correctly.
int main(int ac, char *av[])
{
    int	i;

	i = 0;
	if (ac == 2)
	{
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = (((25 - (av[1][i] - 'a')) % 26) + 'a');
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = (((25 - (av[1][i] - 'A')) % 26) + 'A');
            }
            ft_putchar(av[1][i]);
            i++;
        }
	}
	ft_putchar('\n');
    return (0);
}