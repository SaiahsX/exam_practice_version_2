#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
    int	i = 1;
	int	j = 0;
	char	result[256] = {0};
	
	if (ac == 3)
	{
        while (i < 3)
        {
			j = 0;
            while (av[i][j])
            {
                if (result[(int)av[i][j]] == 0)
                {
                    result[(int)av[i][j]] = 1;
                    ft_putchar(av[i][j]);
                }
                j++;
            }
			i++;
        }
	}
	ft_putchar('\n');
    return (0);
}