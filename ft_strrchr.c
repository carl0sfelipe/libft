/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:26:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/01 13:27:04 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str);

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;

	index = ft_strlen((char *) s) - 1;
	while (s[index])
	{
		if (s[index] == c)
		{
			return ((char *)&s[index]);
		}
	s--;
	}
	return ((char *)s);
}
