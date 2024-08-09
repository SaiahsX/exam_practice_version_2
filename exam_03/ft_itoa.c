#include <stdio.h>
#include <stdlib.h>

// char *ft_strdup(const char *str)
// {
// 	char	*res;
// 	int		i = 0;

// 	if (!str)
// 		return (NULL);
// 	while (str[i] != '\0')
// 		i++;
// 	res = (char *)malloc(sizeof(char) * (i + 1));
// 	if (!res)
// 		return (NULL);
// 	i = 0;
// 	while (str[i])
// 	{
// 		res[i] = str[i];
// 		i++;
// 	}
// 	res[i] = '\0';
// 	return (res);
// }


// int	nbr_len(int nbr)
// {
// 	int	len = 0;

// 	if (nbr == 0)
// 		return (1);
// 	if (nbr < 0)
// 		len++;
// 	while (nbr != 0)
// 	{
// 		nbr = nbr / 10;
// 		len ++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int nbr)
// {
// 	int len = nbr_len(nbr);
// 	char *ascii;

// 	if (nbr == 0)
// 	{
// 		return (ft_strdup("0"));
// 	}
// 	long num = nbr;
// 	ascii = (char *)malloc(sizeof(char) * len +1);
// 	if (!ascii)
// 		return (NULL);
// 	if (num < 0)
// 	{
// 		num *= -1;
// 		ascii[0] = '-';
// 	}
// 	while (num && len)
// 	{
// 		ascii[len - 1] = (num % 10) + '0';
// 		num = num / 10;
// 		len--;
// 	}
// 	return (ascii);
// }

 int nbr_len(int nbr)
 {	
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while(nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
 }

char	*ft_strdup(char *str)
{
	int		i = 0;
	char	*res;

	if (!str)
		return (NULL);
	while(str[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

 char	*ft_itoa(int nbr)
 {
	long	num;
	int		len;
	char	*ascii;

	if (nbr == 0)
		return (ft_strdup("0"));
	len = nbr_len(nbr);
	num = nbr;
	ascii = (char *)malloc(sizeof(char) * (len + 1));
	if (!ascii)
		return (NULL);
	if (nbr < 0)
	{
		num *= -1;
		ascii[0] = '-';
	}
	while (num && len > 0)
	{
		ascii[len - 1] = (num % 10) + '0';
		num /= 10;
		len --;
	}
	return (ascii);
}


int main() {
    char *result;

    // Test Case 1: Positive number
    int num1 = 12345;
    result = ft_itoa(num1);
    printf("Test Case 1: ft_itoa(%d) = %s\n", num1, result);
    free(result);

    // Test Case 2: Negative number
    int num2 = -54321;
    result = ft_itoa(num2);
    printf("Test Case 2: ft_itoa(%d) = %s\n", num2, result);
    free(result);

    // Test Case 3: Zero
    int num3 = 0;
    result = ft_itoa(num3);
    printf("Test Case 3: ft_itoa(%d) = %s\n", num3, result);
    free(result);

    // Test Case 4: Largest positive integer
    int num4 = 2147483647; // INT_MAX
    result = ft_itoa(num4);
    printf("Test Case 4: ft_itoa(%d) = %s\n", num4, result);
    free(result);

    // Test Case 5: Smallest negative integer
    int num5 = -2147483648; // INT_MIN
    result = ft_itoa(num5);
    printf("Test Case 5: ft_itoa(%d) = %s\n", num5, result);
    free(result);

    return 0;
}