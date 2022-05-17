#include <string.h>
#include <stdio.h>
#include "libft.h"
int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "eks";
    char* p;
  char* o;

    // Find first occurrence of s2 in s1
    p = strnstr(s1, s2, 15);
  o = ft_strnstr(s1,s2,15);
    // Prints the result
    if (p) {
        printf("String found\n");
        printf("funçao original: Fi rst occurrence of string '%s' in '%s' is '%s'\n", s2, s1, p);
        printf("minha funçao: Fi rst occurrence of string '%s' in '%s' is '%s'", s2, s1, o);
    } else
        printf("String not found\n");
  
    return 0;
}

