#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	int	j = 0;
	char	str[256] = {0};
	char	seen[256] = {0};
	
	if (ac == 3)
	{
       while(av[2][j])
	   {
			str[(int)av[2][j]] = 1;
			j++;
	   }
	   j = 0;
	   while(av[1][j])
	   {
			if (str[(int)av[1][j]] == 1 && seen[(int)av[1][j]] == 0)
			{
				seen[(int)av[1][j]] = 1;
				ft_putchar(av[1][j]);
			}
			j++;
	   }
	}
	ft_putchar('\n');
    return (0);
}


// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void ft_putstr(char *str)
// {
// 	while(*str)
// 		ft_putchar(*str++);
// }

// int main(int ac, char *av[])
// {
//     int	i;
// 	int	j;
// 	int	k;
// 	int	len;
// 	int	dupli;
// 	char	result[256] = {0};
	
// 	len = 0;
// 	if (ac == 3)
// 	{
// 		i = 0;
//         while (av[1][i] != '\0')
//         {
// 			j = 0;
// 			while (av[2][j] != '\0')
// 			{
// 				dupli = 0;
// 				if (av[1][i] == av[1][j])
// 				{
// 					k = 0;
// 					while (k < len)
// 					{
// 						if (result[k] == av[1][i])
// 						{
// 							dupli = 1;
// 							break;
// 						}
// 						k++;
// 					}
// 					if (!dupli)
// 					{
// 						result[len] = av[1][i];
// 						len++;
// 					}
// 				}
// 				j++;
// 			}
// 			i++;
//         }
// 	}
// 	ft_putstr(result);
// 	ft_putchar('\n');
//     return (0);
// }



