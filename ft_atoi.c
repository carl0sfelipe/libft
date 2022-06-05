/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:07:55 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/01 17:27:57 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(const char *str)
{
	int	unit;
	int	i;
	int	sign;

	i = 0;
	unit = 0;
	signal = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		unit = unit * 10 + str[i] - '0';
		i++;
	}
	return (signal * unit);
}