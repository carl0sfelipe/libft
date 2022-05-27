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
