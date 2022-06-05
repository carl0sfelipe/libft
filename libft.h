/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:56:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/03 18:39:43 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdlib.h>

size_t ft_strlen(char *str);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_tolower(int c);
int ft_toupper(int c);
void *ft_memset(void *b,int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2,size_t);
void *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);


#endif
