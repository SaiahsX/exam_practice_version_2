#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int	temp;

	if (a == NULL || b == NULL)
        return;  // Do nothing if either pointer is NULL
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("%d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d, %d\n", x, y);
	printf("NULL SWAP\n");
	ft_swap(NULL, &y);
	printf("%d, %d\n", x, y);
	return (0);
}