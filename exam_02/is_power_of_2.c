
int	    is_power_of_2(unsigned int n)
{
   if (n == 0)
    return (0);
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	return ((n == 1) ? 1 : 0);
}

#include <stdio.h>

// int	main(void)
// {
// 	printf("%d[%d]\n", is_power_of_2(0), 0);
// 	printf("%d[%d]\n", is_power_of_2(2), 2);
// 	printf("%d[%d]\n", is_power_of_2(4), 4);
// 	printf("%d[%d]\n", is_power_of_2(6), 6);
// 	printf("%d[%d]\n", is_power_of_2(8), 8);
// 	printf("%d[%d]\n", is_power_of_2(32), 32);
// 	printf("%d[%d]\n", is_power_of_2(42), 42);
// 	printf("%d[%d]\n", is_power_of_2(67), 67);
// 	printf("%d[%d]\n", is_power_of_2(124), 124);
// 	printf("%d[%d]\n", is_power_of_2(256), 256);
// 	return (0);
// }