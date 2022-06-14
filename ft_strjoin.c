/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:21:57 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/13 20:52:35 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result)
	{
		ft_strlcpy(result, s1, ft_strlen(s1) + 1);
		ft_strlcat(result, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (result);
}
