/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:18:57 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/15 19:41:08 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	int index;

	index = 0;
	result = malloc((ft_strlen(s)+1));
	while (s[index])
	{
		result[index] = f(index,s[index]);
		index++;
	}
	result[index] = '\0';
return (result);
}
