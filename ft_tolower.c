/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:00:48 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/07 03:37:44 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(int c)
{
	unsigned int	i;

	i = 0;
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
		}
	return (c);
}


 #include <stdio.h>
 
 int main(void)
 {
 char c;
 c = 'a';
 
 printf("%c",ft_tolower(c));
 }
