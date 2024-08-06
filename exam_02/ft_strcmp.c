// in this function we need to do the comparison within the condition
// then iteratea nand return the typecasted difference in unsigned char
int    ft_strcmp(char *s1, char *s2)
{
    int	i;

	i = 0;
	while((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h> // For printf
// #include <string.h> //For strcmp

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("hello", "hello"));
// 	printf("%d\n", strcmp("hello", "hello"));
// 	printf("%d\n", ft_strcmp("hel", "hello"));
// 	printf("%d\n", strcmp("hel", "hello"));
// 	printf("%d\n", ft_strcmp("hello", ""));
// 	printf("%d\n", strcmp("hello", ""));
// 	//printf("%d\n", ft_strcmp(NULL, "null"));
// 	return (0);
// }