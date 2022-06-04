/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:53:48 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/04 17:59:21 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src,sizet n)
{
char	*destiny;
const char *source;

destiny = dst;
source = src;
if (dst == NULL && src == NULL)
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
