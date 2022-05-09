#include<stdio.h>
#include "ft_isalpha.c"
#include<ctype.h>
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"

int	main()
{
	char a;
	a = ' ';
    char b;
    b = a-1;

int result;

int result2;
result = ft_isprint(a);
result2 = isprint(a);


	printf("minha funçao: %d função original: %d",result, result2);

return (1);
}
