/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:47:10 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/30 17:51:27 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i <= n)
	{
		if (s1[i] == s2[i])
		{
			if (!s1[i+1] || !s2[i+1])
			{
				return ((unsigned char)s1[i] - s2[i]);
			}
			i++;
		}
		else	return ((unsigned char)s1[i] - s2[i]);
	}

		return ((unsigned char)s1[i] - s2[i]);
}
