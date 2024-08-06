#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		m = 0;
	char	**split_result;

	split_result = (char **) malloc ( sizeof (char *) * 2048);
	if (!split_result)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		split_result[k] = (char *) malloc (sizeof (char) * 256);
		if (!split_result[k])
		{
			while (m < 2048)
			{
				free (split_result[m]);
				m++;
			}
			free (split_result);
			return (NULL);
		}
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			split_result[k][j++] = str[i++];
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split_result[k][j] = '\0';
		k++;
	}
	split_result[k] = NULL;
	return (split_result);
}

