/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:00:28 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/04 18:23:46 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2,size_t)
{
const unsigned char	*string1;
const unsigned char	*string2;
size_t	i;

i = 0;
string1 = (const unsigned char *)str1;
string2 = (const unsigned char *)str2;
while (i < n)
{
if (string1[i] != string2[i])
{
return (string1[i] - string2[i]);
}
i++;
}
return (0);
}
