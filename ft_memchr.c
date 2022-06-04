/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:50:46 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/04 15:59:07 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *point;
	size_t i;

	i=0;
	point = (unsigned char *)s;
	while(n--)
	{
		if(point[i]==(unsigned char)c)
		{
		return (&point[i]);
		}
	i++;
	}

return (0);
}
