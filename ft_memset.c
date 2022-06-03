/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:54:32 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/03 18:36:39 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
void *ft_memset (void *b,int c, size_t len) {
 size_t i;
char *point;

point = (char *)b;
 i=0;
   	while(i< len)
  {
  	point[i] = c;
	i++;
  }
return (point);
}
/*
int main()
{
   char str[50];





 strcpy(str,"This is string.h library function");
 
 
  
   puts(str);
   memset(str,'$',7);
  
   puts(str);
  strcpy(str,"This is string.h library function");
 
 
  
   puts(str);
 

   ft_memset(str,'$',7);
   
   
  
   puts(str);
   

   
   return(0);
}*/
