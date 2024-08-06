#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	print_bits(unsigned char octet)
// {
//     int i;

//     i = 7;
//     while(i >= 0)
//     {
//         if (octet & (1 << i))
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//         i--;
//     }
// }

// This function reverses the bits of an unsigned char
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char	result;
    int				i;

	result = 0;
	i = 7;
	while (i >= 0)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (result);
}


// int	main(void)
// {
// 	print_bits(2);
// 	ft_putchar('\n');
// 	print_bits(reverse_bits(2));
// 	ft_putchar('\n');
// }