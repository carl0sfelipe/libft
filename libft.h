/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:56:17 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/14 13:21:44 by csiqueir         ###   ########.fr       */
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


#endif
