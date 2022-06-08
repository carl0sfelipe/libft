/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:24:42 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/06 20:24:01 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	size_t i;
	char *source;

	source = (char*)src;
	dest = (char *)dst;
	
	if (dst == NULL && src == NULL)
		return (0);
	if (dest > source)
		while (len-- > 0)
			dest[len] = source[len];
	
	else
		while(i < len)
		{
			dest[i] = source[i];
	   		i++;
		}
		
	return (dest);
	}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[50] = "helloworld";
   const char src[]  = "warIIIIIIIIIIIIII";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 10);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   char dest1[50] = "helloworld";
   const char src1[]  = "warIIIIIIIIIIIIII";


   printf("Before memcpy  dest = %s, src = %s\n", dest1, src1);
   ft_memmove(dest1, src1, 10);
   printf("After memcpy  dest = %s, src = %s\n", dest1, src1);
 


   return(0);
}*/
