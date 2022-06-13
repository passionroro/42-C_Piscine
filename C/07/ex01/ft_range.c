/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:28:42 by rohoarau          #+#    #+#             */
/*   Updated: 2021/08/24 10:18:13 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	len;
	int	*tab;

	len = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(sizeof(*tab) * (len + 1));
	if (tab == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		j++;
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
