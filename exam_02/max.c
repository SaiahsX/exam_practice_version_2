#include <unistd.h> // For write
#include <stddef.h> // For NULL || (void *)0 || 0

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		max(int* tab, unsigned int len)
{
    int max;
	unsigned int	i;

	i = 1;
		if (!tab || len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}

// int	main(void)
// {
// 	int	arr[4];

// 	arr[0] = 7;
// 	arr[1] = 2;
// 	arr[2] = 4;
// 	arr[3] = 9;
// 	ft_putnbr(max(arr, 4));
// 	ft_putchar(10);
// 	ft_putnbr(max(NULL, 4));
// 	ft_putchar('\n');
// 	return (0);
// }