/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:26:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/08 15:34:34 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
		int	sz_temp;

			sz_temp = ft_strlen(s);
				while (sz_temp >= 0)
						{
									if (s[sz_temp] == (char)c)
													return ((char *)&s[sz_temp]);
											sz_temp--;
												}
					return ((char *)0);
}
