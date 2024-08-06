#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		ft_putchar(str[i++]);
}

// this function uses recurssion to split the number into single 
//digits then returns to the second to last recurssion and 
//performs the next recurssion to print out subsequent digits.
void	write_number(int num)
{
	if (num > 9)
	{
		write_number(num / 10);// here 123 becomes 12, then becomes 1. 1 is then passed to ft_putchar
		write_number(num % 10);// after printing 1, it returns to use 12%10 = 2, the 2 is passed to ft_putchar. then it returns to 123%10 = 3, the 3 is passed to ft_putchar
	}
	else
		ft_putchar(num + '0');
}

// This function doesnt use int argc and char **arcgv. its just void arg. 
// we need to start the index from 1 and not 0 to avoid printing fizzbuzz for 0
// the condition for printing fizzbuzz must come first then others, 
// otherwise the condition for fizzbuzz would never be true.
int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            write_number(i);
		ft_putchar('\n');
		i++;
    }
}
