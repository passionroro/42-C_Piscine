/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:20:21 by rohoarau          #+#    #+#             */
/*   Updated: 2021/08/17 11:48:55 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else
	{	
		while (power > 0 && nb != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
