#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p;
 	char* o;

    // Find first occurrence of s2 in s1
    p = ft_strnstr(s1, s2,8);
 	o = strnstr(s1, s2,8); 
    // Prints the result
   
   
	if (p==o) {
        printf("Resultado bateu\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, o);
    } else
        printf("sua funçao ta zuada, retornou %s  \n",o);
  
    return 0;
}
