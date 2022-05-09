/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:17:38 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/07 03:32:47 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(int c)
{
	unsigned int	i;

	i = 0;
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
	return (c);
}

#include <stdio.h>

int main(void)
{
char c;
c = 'a';

printf("%c",ft_toupper(c));
}
