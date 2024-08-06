#include <string.h>
#include <stddef.h>

const char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				return &s1[i];
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *str1 = "hello, world";
//     const char *str2 = "ol";

//    const char *result = ft_strpbrk(str1, str2);
//    const char *result2 = strpbrk(str1, str2);
//     if (result != NULL)
//     {
//         printf("First matching character replica: %c\n", *result); // Output: "o"
//         printf("First matching character original: %c\n", *result2);
//     }
//     else
//     {
//         printf("No matching characters found.\n");
//     }

//     return 0;
// }
