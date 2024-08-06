#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

// int main()
// {
//     const char *s = "hello, world!";
//     const char *reject = " ,!";

//     size_t len = ft_strcspn(s, reject);
// 	size_t	len2 = strcspn(s, reject);

//     printf("The initial segment length is: %zu\n", len); // Output: 5 ("hello")
// 	 printf("The initial segment length2 is: %zu\n", len2); // Output: 5 ("hello")

//     return 0;
// }
