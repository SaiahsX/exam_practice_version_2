#include <string.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(const char *src)
{
    int     i;
    int     len;
    char    *res;

    i = 0;
    if (src == NULL)
        return (NULL);
    len = ft_strlen(src);
    res = (char *)malloc(sizeof (char) * (len + 1));
    if (!res)
        return (NULL);
    while(src[i] != '\0')
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

#include <stdio.h>

int main()
{
    const char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy != NULL)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);  // Don't forget to free the allocated memory
    }
    else
    {
        printf("Failed to duplicate string.\n");
    }
    return 0;
}
