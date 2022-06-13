/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:08:43 by umerat            #+#    #+#             */
/*   Updated: 2021/08/21 10:10:30 by umerat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long	ft_atoi(char *str)
{
	long	sign;
	long	math;
	long	i;

	sign = 1;
	i = 0;
	math = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		math = math * 10 + (str[i] - 48);
		i++;
	}
	math = math * sign;
	return (math);
}

long	ft_recursive_power(long nb, long power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
