/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:56:28 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/21 18:58:13 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start_len;
	int		end_len;

	if (!s1)
		return (NULL);
	end_len = ft_strlen(s1) - 1;
	start_len = 0;
	while (s1[start_len] != '\0' && ft_strchr(set, s1[start_len]))
	{
		start_len++;
	}
	while (s1[end_len] != '\0'
		&& ft_strchr(set, s1[end_len]) && end_len > start_len)
	{
		end_len--;
	}
	result = ft_substr(s1, start_len, end_len - start_len + 1);
	return (result);
}
