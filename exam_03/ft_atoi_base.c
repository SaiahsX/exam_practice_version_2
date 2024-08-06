int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int digit_val;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch += ' ';
        if (ch >= '0' && ch <= '9')
            digit_val = ch - '0';
        else if (ch >= 'a' && ch <= 'f')
            digit_val = ch - 'a' + 10;
        else
            break;
        if (digit_val >= str_base)
            break;
        result = result * str_base + digit_val;
        i++;
    }
    return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("A", 16));
// 	printf("%d\n", ft_atoi_base("B", 16));
// 	printf("%d\n", ft_atoi_base("C", 16));
// 	printf("%d\n", ft_atoi_base("D", 16));
// 	printf("%d\n", ft_atoi_base("e", 16));
// 	printf("%d\n", ft_atoi_base("E", 16));
// 	return (0);
// }