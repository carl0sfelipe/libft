/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:07:55 by csiqueir          #+#    #+#             */
/*   Updated: 2022/05/17 21:12:11 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;
	int	index;

	result = 0;
	signal = 1;
	index = 0;
	if (str[0] == '-')
	{
		signal = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	return (signal * result);
}
