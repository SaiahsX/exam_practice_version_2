#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
    int	i;
    int j;
    int k;
    int result;

	result = 0;
	if (ac == 4)
	{
        if (av[2][1] == '\0')
        {
		i = atoi(av[1]);
        j = av[2][0];
        k = atoi(av[3]);
		if (j == '+')
			result = i + k;
		else if (j == '-') 
            result = i - k;
		else if (j == '*')
			result = i * k;
		else if (j == '/')
			result = i / k;
		else if (j == '%')
			result = i % k;
		printf("%d", result);
        }
	}
	printf("\n");
    return (0);
}