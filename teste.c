#include<stdio.h>
#include "libft.h"
#include<ctype.h>
#include<string.h>

int main () {
    char str1[15];
   char str2[15];
   char str3[15];
   char str4[15];
   int ret;
	int rep;

	strcpy(str1, "adshjgcaad");
	strcpy(str2, "aadssduhaac");

	strcpy(str3, "aaaad");
	strcpy(str4, "aaaac");



      ret = strncmp(str1, str2, 6);

      rep = ft_strncmp(str1, str2, 6);

  printf("\n\n%d\n\n",ret);
   
   printf("\n\n%d\n\n",rep);
   return(0);
}
