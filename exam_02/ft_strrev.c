#include <stdio.h>

char    *ft_strrev(char *str)
{
    int     start;
    int     end;
    char    temp;
    
    start = 0;
    end = 0;
    while(str[end] != '\0')
    {
        end++;
    }
    end --;
    while (start < end) //this condition make the start and end meet half way
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}

// int main()
// {
//     char str[] = "Hello, World!";

//     printf("Original string: %s\n", str);
    
//     // Reverse the string in place
//     ft_strrev(str);
    
//     // Print the reversed string
//     printf("Reversed string: %s\n", str);
    
//     return 0;
// }