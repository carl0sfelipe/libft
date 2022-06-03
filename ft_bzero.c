/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:19:26 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/03 18:43:39 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s,'\0',n);
}
#include <stdio.h>
int main()
{
char str[] = "hello world";

puts(str);

ft_bzero(str,11);
int i =0;

while(i< sizeof(str)-1)
{
printf("%i",str[i]);
i++;
}
return 0;
}
