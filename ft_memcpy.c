/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:53:48 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/08 15:03:18 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src,size_t n)
{
char	*destiny;
const char *source;

destiny = (char *)dst;
source = (char *)src;
if (!destiny && !source)
{
	return (0);
}
while(n--)
{
*destiny = *source;
destiny++;
source++;
}
return(dst);
}
