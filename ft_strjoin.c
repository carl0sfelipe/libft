#include "libft.h"
char *ft_strjoin(const char* s1, const char* s2)
{
    char    *result;
    
    result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

    if (result)
    {
        ft_strlcpy(result, s1, ft_strlen(s1) +1);
        ft_strlcat(result, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
    }

    return result;
}
#include <stdio.h>

int main()
{
const char *str1 = "teste";
const char *str2 = "123";
char *result;
result = ft_strjoin(str1,str2);
puts(result);
    return 0;
}