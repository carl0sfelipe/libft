/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:19:43 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/25 19:23:20 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t index;

index = 0;
if (dstsize != 0 )
{
	while (index < dstsize - 1)
	{

		dst[index] = src[index];

		if (index+1 == dstsize)
		{
			dst[index] = '\0';
		}

		index++;
	}

}
return ft_strlen((char *)src);
}


int main(void)
{
    char string[] = "Hello there,12345";
    char buffer[7];
    int r;



    printf("string '%s' buffer '%s'\n", string, buffer );
    

	ft_strlcpy(buffer,string, 18);

printf("buffer %s \n", buffer);


char string2[] = "Hello there,12345";


    printf("string '%s' buffer '%s'\n", string, buffer );

strlcpy(buffer,string2, 18);
	
printf("buffer %s \n", buffer);

	return 0;
}
  //  printf("Copied '%s' into '%s', length %d with ft_strlpy() with size = %d\n", string, buffer, r , size );
//r = strlcpy(buffer, string, size);
 //   printf("Copied '%s' into '%s', length %d with strlcpy() with size = %d\n", string, buffer, r, size );
