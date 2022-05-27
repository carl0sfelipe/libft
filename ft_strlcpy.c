/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:19:43 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/25 20:32:19 by csiqueir         ###   ########.fr       */
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

