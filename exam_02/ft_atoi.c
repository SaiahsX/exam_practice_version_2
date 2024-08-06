
int	ft_atoi(const char *str)
{
    int	i;
	int polarity;
	int res;

	i = 0;
	res = 0;
	polarity = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			polarity = -1;
			
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * polarity);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_atoi("123"));       // Output: 123
//     printf("%d\n", ft_atoi("-123"));      // Output: -123
//     printf("%d\n", ft_atoi("+123"));      // Output: 123
//     printf("%d\n", ft_atoi("42abc"));     // Output: 42 (stops at the first non-digit)
//     return 0;
// }
