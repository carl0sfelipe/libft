/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:24:42 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/04 18:31:25 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
return 0;
}

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "helloworld";
   const char src[]  = "warIII";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 4);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
