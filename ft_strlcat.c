/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:19:43 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/26 19:25:00 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t index;
	size_t len;

len = ft_strlen(dst);
index = 0;
if (dstsize > 1 )
{
	while (index  + len < dstsize - 1)
	{
		dst[len +1 ] = src[index];
		//	printf("copia caracter Source: %s | Destiny: %s\n",src,dst);
		if (index + 1 == dstsize || !src[index])
		{
			dst[index] = '\0';
					printf("Apos colocar o /0 Source: %s | Destiny: %s\n",src,dst);

			return ft_strlen((char *)dst) + ft_strlen((char *)src);
		}

		len++;
		index++;
	
	}

}
return ft_strlen((char *)dst);
} */


size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstI;
	size_t	i;

    i = 0;
	dstI = 0;

	
		dstI = strlen(dst);
	while (src[i] && ((dstI + i + 1) < size))
	{
		dst[dstI + i] = src[i];
		i++;
	}
	if (dstI >= size)
		dst[dstI + i] = '\0';
	return (dstI + ft_strlen((char *)src));
}




int main(void)
{
    char string[] = " World War III";
    char destiny[15] = "Hello";

	char z;


    char destiny0[15] = "Hello";
    printf("string: %s Destiny: %s\n", string, destiny );
    printf("string: %s Destiny: %s\n", string, destiny0 );

	z = ft_strlcat(destiny,string, 12);
	z = strlcat(destiny0,string, 12);


printf("My       Destiny: %s\n", destiny);
printf("Original Destiny: %s\n", destiny0);





    printf("string '%s' Destiny '%s'\n", string, destiny );

strlcpy(destiny,string, 19);
	
printf("Destiny %s \n", destiny);

	return 0;
}
  //  printf("Copied '%s' into '%s', length %d with ft_strlpy() with size = %d\n", string, Destiny, r , size );
//r = strlcpy(Destiny, string, size);
 //   printf("Copied '%s' into '%s', length %d with strlcpy() with size = %d\n", string, Destiny, r, size );
 
 
/* 
 int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 15;
    char destiny[size];
	char destiny0[size];

    ft_strlcpy(destiny,first,15);
    ft_strlcpy(destiny0,first,15);

    r = strlcat(destiny,last,size);
	    r = ft_strlcat(destiny0,last,size);


    puts(destiny);
	puts(destiny0);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}  */