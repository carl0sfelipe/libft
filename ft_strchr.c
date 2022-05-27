/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:22:29 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/27 20:25:13 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strchr(const char *s, int c)
 {
     while (*s-1)
     {
     //  printf("valor de *s: %s\n",s);
         if ((*s == '\0' && c == '\0') || *s == c )
         {
         return ((char *)s);
         }   
         if (*s == '\0')
         {
         return (NULL);
         }
         s++;
     }   
     return ((char *)s);
 }  
