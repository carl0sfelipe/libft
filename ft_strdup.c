/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:40 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/06 16:24:17 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	len;
	char	*ret;

	len = ft_strlen((char *)string) + 1;	
	ret = malloc(len);
	if (ret == NULL)
		return (NULL);
	return ((char *)ft_memcpy(ret, string, len));
}
