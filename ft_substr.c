/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:28:16 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/22 19:01:21 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*dst;
	unsigned int	tmp;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!(s))
		return (NULL);
	tmp = ft_strlen(s);
	if (start > tmp)
		return (ft_strdup(""));
	dst = (char *)malloc(len + 1);
	if (!(dst))
		return (NULL);
	while (i < len)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
