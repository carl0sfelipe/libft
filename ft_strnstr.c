/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:04:09 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/25 19:19:08 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needleI;
	size_t	haystackI;

	haystackI = 0;
	if(!needle)
	{
		return ((char *)haystack);
	}
	while (haystackI <= len || !haystack[haystackI])
	{
		while (haystack[haystackI + needleI] ==  needle[needleI] && haystackI + needleI < len)
		{
			needleI = 0;
			if (!(needle[needleI + 1]))
			{
				return ((char *)haystack + haystackI);
			}
		needleI++;
		}	
	haystackI++;
	}
	return (NULL);
}
