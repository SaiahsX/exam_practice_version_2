#include <unistd.h>
#include <stdlib.h>

// char	**ft_split(char *str)
// {
// 	int		i = 0;
// 	int		j = 0;
// 	int		k = 0;
// 	int		m = 0;
// 	char	**split_result;

// 	split_result = (char **) malloc ( sizeof (char *) * 2048);
// 	if (!split_result)
// 		return (NULL);
// 	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
// 		i++;
// 	while(str[i])
// 	{
// 		j = 0;
// 		split_result[k] = (char *) malloc (sizeof (char) * 256);
// 		if (!split_result[k])
// 		{
// 			while (m < 2048)
// 			{
// 				free (split_result[m]);
// 				m++;
// 			}
// 			free (split_result);
// 			return (NULL);
// 		}
// 		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 		{
// 			split_result[k][j++] = str[i++];
// 		}
// 		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
// 			i++;
// 		split_result[k][j] = '\0';
// 		k++;
// 	}
// 	split_result[k] = NULL;
// 	return (split_result);
// }

/*
int	delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	word_count(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] && delimiter(str[i]))
			i++;
		if (str[i] != '\0' && !delimiter(str[i]))
		{
			count++;
			while (str[i] && !delimiter(str[i]))
				i++;
		}
	}
	return (count);
}

char	*get_word(char *str, int *index)
{
	int	i;
	int start;
	char	*word;

	i = 0;
	start = *index;
	while (str[*index] != '\0' && !delimiter(str[*index]))
	{	
		(*index)++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return NULL;
	i = 0;
	// while (str[i] != '\0' && !delimiter(str[i]))
	while (start < *index)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i]	= '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	i;
	int j;
	char **splity;

	i = 0;
	j = 0;
	splity = (char **)malloc(sizeof (char *) * (word_count(str) + 1));
	if (! splity)
		return NULL;
	while (str[i])
	{
		while (str[i] && delimiter(str[i]))
			i++;
		if (str[i] && !delimiter(str[i]))
		{
			splity[j] = get_word(str, &i);
			j++;
		}
		while (str[i] && !delimiter(str[i]))
			i++;
	}
	splity[j] = NULL;
	return (splity);
}
*/


// int	delimiter(char c)
// {
// 	return (c == ' ' || c == '\n' || c == '\t');
// }

// int	count_words(char *str)
// {
// 	int	i = 0;
// 	int	count = 0;

// 	while (str[i])
// 	{
// 		while (str[i] && delimiter(str[i]))
// 			i++;
// 		if (str[i] != '\0' && !delimiter(str[i]))
// 		{
// 			count++;
// 			while (str[i] && !delimiter(str[i]))
// 				i++;
// 		}
// 	}
// 	return (count);
// }
// char	*get_word(char *str, int *idx)
// {
// 	int	i;
// 	int st;
// 	char *word;

// 	i = 0;
// 	st = *idx;
// 	while (str[*idx] && !delimiter(str[*idx]))
// 	{
// 		(*idx)++;
// 		i++;
// 	}	
// 	word = (char *)malloc(sizeof(char) * (i + 1));
// 	if (!word)
// 		return (NULL);
// 	i = 0;
// 	while (st < *idx)
// 	{
// 		word[i] = str[st];
// 		i++;
// 		st++;
// 	}
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char *str)
// {
// 	int	i;
// 	int	j;
// 	char	**spleet;

// 	i = 0;
// 	j = 0;
// 	spleet = (char **)malloc(sizeof (char *) * (count_words(str) +1));
// 	if (!spleet)
// 		return (NULL);
// 	while (str[i])
// 	{
// 		while (str[i] && delimiter(str[i]))
// 			i++;
// 		if(str[i] && !delimiter(str[i]))
// 		{
// 			spleet[j] = get_word (str, &i);
// 			j++;
// 		}
// 		while (str[i] && !delimiter(str[i]))
// 			i++;
// 	}
// 	spleet[j] = NULL;
// 	return (spleet);
// }

int	delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	count_words(char *str)
{
	int i = 0;
	int	count = 0;

	while (str[i])
	{
		while (str[i] && delimiter(str[i]))
			i++;
		if (str[i] && !delimiter(str[i]))
		{
			count++;
			while (str[i] && !delimiter(str[i]))
				i++;
		}
	}
	return (count);
}

char	*get_word(char *str, int *idx)
{
	int	i = 0;
	int	st = *idx;
	char *word;

	while (str[*idx] && !delimiter(str[*idx]))
	{
		(*idx)++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (st < *idx)
	{
		word[i] = str[st];
		st++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int i = 0;
	int	j = 0;
	char	**sploiter;

	sploiter = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!sploiter)
		return (NULL);
	while (str[i])
	{
		while (str[i] && delimiter(str[i]))
			i++;
		if (str[i] && !delimiter(str[i]))
		{
			sploiter[j] = get_word(str, &i);
			j++;
		}
		while (str[i] && !delimiter(str[i]))
			i++;
	}
	sploiter[j] = NULL;
	return (sploiter);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test case 1: Multiple consecutive delimiters
    char str1[] = "Hello   world  \tthis  is a\t test";
    char **result1 = ft_split(str1);
    printf("Test Case 1: Multiple consecutive delimiters\n");
    for (int i = 0; result1[i]; i++) {
        printf("Word %d: %s\n", i + 1, result1[i]);
        free(result1[i]);
    }
    free(result1);
    
    // Test case 2: Leading and trailing delimiters
    char str2[] = "   leading and trailing spaces  ";
    char **result2 = ft_split(str2);
    printf("\nTest Case 2: Leading and trailing delimiters\n");
    for (int i = 0; result2[i]; i++) {
        printf("Word %d: %s\n", i + 1, result2[i]);
        free(result2[i]);
    }
    free(result2);

    // Test case 3: Empty string
    char str3[] = "";
    char **result3 = ft_split(str3);
    printf("\nTest Case 3: Empty string\n");
    if (result3[0] == NULL) {
        printf("No words found.\n");
    }
    free(result3);

    // Test case 4: Single-word string
    char str4[] = "singleword";
    char **result4 = ft_split(str4);
    printf("\nTest Case 4: Single-word string\n");
    for (int i = 0; result4[i]; i++) {
        printf("Word %d: %s\n", i + 1, result4[i]);
        free(result4[i]);
    }
    free(result4);

    // Test case 5: No delimiters (long word)
    char str5[] = "averylongwordwithoutanyspacesortabsornewlines";
    char **result5 = ft_split(str5);
    printf("\nTest Case 5: No delimiters\n");
    for (int i = 0; result5[i]; i++) {
        printf("Word %d: %s\n", i + 1, result5[i]);
        free(result5[i]);
    }
    free(result5);

    // Test case 6: String with only delimiters
    char str6[] = "   \t\n  .";
    char **result6 = ft_split(str6);
    printf("\nTest Case 6: String with only delimiters\n");
	if (result6[0] == NULL || result6 == NULL)
	{
    	printf("No words found.\n");
	}
	else
    	for (int i = 0; result6[i]; i++) 
		{
			printf("Word %d: %s\n", i + 1, result6[i]);
            free(result6[i]);
	    }
    free(result6);
    return 0;
}
