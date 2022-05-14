#include<stdio.h>
#include "libft.h"
#include<ctype.h>
#include<string.h>


int	main()
{
	const char *stri = "qwertyrewq";
	char a;
	a = 'r';
    char b;
    b = '\n';

char *result;

char *result2;
result = ft_strrchr(stri,a);
result2 = strrchr(stri,a);

	printf("minha funçao: %s função original: %s\n",result, result2);

return (1);
}
