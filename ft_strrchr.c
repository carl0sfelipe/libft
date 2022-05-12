/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:26:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/11 21:08:48 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(char *str);

char    *ft_strrchr(const char *s, int c)
{
size_t index = ft_strlen((char *) s)-1;

 	 while (s[index])
     {
        if (s[index] == c)
       {
         return ((char *)&s[index]);               
        }
		s--;
	}

	 return ((char *)s);
}

#include <stdio.h>

int main () { 
   const char str[] = "www.google.com";
   const char ch = '.';
   char *ret;
  
   ret = ft_strrchr(str, ch);
    
   printf("Last string after |%c| is - |%s|\n", ch, ret);
 
return(0);
}
