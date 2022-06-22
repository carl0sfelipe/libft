/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:04:09 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/22 18:48:39 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_i;
	size_t	haystack_i;
	char	*result;

	haystack_i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack_i < len && haystack[haystack_i])
	{
		needle_i = 0;
		if (haystack[haystack_i] == needle[needle_i])
		{
			result = (char *)&haystack[haystack_i];
			while (needle[needle_i] && haystack_i + needle_i < len
				&& haystack[haystack_i + needle_i] == needle[needle_i])
					needle_i++;
			if (needle_i && needle_i == ft_strlen((char *)needle))
				return (result);
		}	
	haystack_i++;
	}
	return (NULL);
}
