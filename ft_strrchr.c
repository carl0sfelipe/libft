/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:26:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/08 15:34:34 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;

	index = ft_strlen((char *) s) - 1;
	while (s[index] && index >= 0)
	{
		if (c == '\0')
			return ((char *)&s[ft_strlen((char *) s)]);
		if (s[index] == c)
		{
			return ((char *)&s[index]);
		}
	s--;
	}
	return (NULL);
}
