/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:04:09 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/16 20:03:21 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*pointer;

	i = 0;
	if(!*needle)
	{
		pointer = (char *)haystack;
		return (pointer);
	}
	while (i <= len)
	{
		if (haystack[i] == (char)needle)
		{
			pointer = (char *)&haystack[i];
			return (pointer);
		}
		i++;
	}	
	return (NULL);
}
