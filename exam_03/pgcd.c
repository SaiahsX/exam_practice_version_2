#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
  	int	x;

	x = 0;
	while (b != 0)
    {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int	main(int argc, char *argv[])
{
	int result;

	result = 0;
	if (argc == 3)
	{
		result = gcd(atoi(argv[1]), atoi(argv[2]));
		printf("%d", result);
	}
	printf("\n");
	return (0);
}