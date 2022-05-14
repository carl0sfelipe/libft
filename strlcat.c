/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:19:43 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/14 14:58:45 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t index;
	size_t len;
	len = ft_strlen(dst);
	index = 0;
	if (dstsize > 1 )
	{
	while (index < dstsize - 1)
	{
		dst[len] = src[index];
		if (index + 1 == dstsize || !src[index +1])
		{
			dst[index] = '\0';
			return ft_strlen((char *)dst) + ft_strlen((char *)src);
		}
		len++;
		index++;
	}
}
	return ft_strlen((char *)dst) + ft_strlen((char *)src);
}


int main(void)
{
    char string[] = " World War IIIIIIII";
    char Destiny[6] = "Hello";
    char Destiny2[6] = "Hello";

    
    printf("string: %s Destiny: %s\n", string, Destiny );
    
	ft_strlcat(Destiny,string, 7);
	strlcat(Destiny2,string,7);

printf("My destiny: %s\n", Destiny);
printf("Original destiny2: %s\n", Destiny);


/*char string2[] = "Hello there,12345";


    printf("string '%s' Destiny '%s'\n", string, Destiny );

strlcpy(Destiny,string2, 18);
	
printf("Destiny %s \n", Destiny);
*/
	return 0;
}
  //  printf("Copied '%s' into '%s', length %d with ft_strlpy() with size = %d\n", string, Destiny, r , size );
//r = strlcpy(Destiny, string, size);
 //   printf("Copied '%s' into '%s', length %d with strlcpy() with size = %d\n", string, Destiny, r, size );