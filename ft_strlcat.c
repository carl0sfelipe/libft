/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:27:13 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/01 17:27:17 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			src_len;
	size_t			dst_len;
	unsigned int	dst_i;
	int				src_i;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	dst_i = ft_strlen(dst);
	src_i = 0;
	if (dstsize < 1)
		return (src_len + dstsize);
	while (src[src_i] != '\0' && dst_i < dstsize - 1)
	{
		dst[dst_i] = src[src_i];
		dst_i++;
		src_i++;
	}
	dst[dst_i] = '\0';
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
		return (dst_len + src_len);
}
