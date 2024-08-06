#include <unistd.h>

// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

//Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    print_hex(unsigned int num)
{
 	if(num >= 16)
	{
		print_hex(num / 16);
		num = num % 16;
	}
	if (num < 10)
	{
		ft_putchar (num + '0');
	}
	else
		ft_putchar((num - 10) + 'a');
}

int	ft_mini_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	if (str[i] && (str[i] < 0 || str[i] > 9))
		return (-1);
	return (result);
}

int main(int argc, char *argv[])
{
	unsigned int	num;

	num = 0;
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
	num = (unsigned int)ft_mini_atoi(argv[1]);
    print_hex(num);
	ft_putchar('\n');
	return (0);
}