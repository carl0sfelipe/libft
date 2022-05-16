#include<stdio.h>
#include "libft.h"
#include<ctype.h>
#include<string.h>

int main () {
    char *str1[15];
   char *str2[15];
   char *str3 ="sdf";
   char *str4 = "jsdhg sdf jhdgs";
  // char *ret;
  // char *rep;

//	strcpy(str4, "adsdsfkhdfsjkhdfsjh");
//	strcpy(str3, "fkh");

//	strcpy(str1, "aaaad");
//	strcpy(str2, "aaaac");



//      ret = strnstr(str4, str3, 6);

  //    rep = ft_strnstr(str4, str3, 6);

  printf("\nfunçao original: \n%s\n\n", strnstr(str4, str3, 6));
   
   printf("\nminha funçao: \n%s\n\n", ft_strnstr(str4, str3, 6));
   return(0);
}
