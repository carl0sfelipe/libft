#include<stdio.h>
#include "libft.h"
#include<ctype.h>


int ft_isdigit(int c);

int	main()
{
	char a;
	a = 's';
    char b;
    b = '\n';

int result;

int result2;
result = ft_isprint(b);
result2 = isprint(b);


	printf("minha funçao: %d função original: %d\n",result, result2);

return (1);
}
