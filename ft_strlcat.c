/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:19:43 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/14 14:20:35 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t index;
	size_t len;

len = ft_strlen(dst);
index = 0;
if (dstsize > 1 )
{
	while (index < dstsize - 1 && src[index] != '\0')
	{
		dst[len] = src[index];

		if (index + 1 == dstsize)// || src[index+1] != '\0')
		{
			dst[index] = '\0';
			return ft_strlen((char *)dst) + ft_strlen((char *)src);
		}

		len++;
		index++;
	
	}

}
return ft_strlen((char *)dst);
}


int main(void)
{
    char string[] = " World War II";
    char Destiny[] = "Hello";
    
    printf("string: %s Destiny: %s\n", string, Destiny );
    
	ft_strlcat(Destiny,string, 7);

printf("Destiny: %s\n", Destiny);


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
