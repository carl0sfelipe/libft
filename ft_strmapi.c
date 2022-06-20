/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:18:57 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/20 13:54:15 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	int index;

	index = 0;
	if (!s || !f)
		return NULL;
	result = malloc((ft_strlen(s)+1));
	if (!result)
		return NULL;
	while (s[index])
	{
		result[index] = f(index,s[index]);
		index++;
	}
	result[index] = '\0';
return (result);
}
