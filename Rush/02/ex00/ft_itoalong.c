/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoalong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:34:55 by rohoarau          #+#    #+#             */
/*   Updated: 2021/08/22 18:40:13 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long	ft_get_size(long n)
{
	long	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_res(long size, long offset, long n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(long n)
{
	long	offset;
	long	size;
	char	*res;

	offset = 0;
	size = ft_get_size(n);
	res = (char *)malloc(sizeof(res) * size + 1);
	if (res == NULL)
		return (0);
	if (n < 0)
	{
		res[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_fill_res(size, offset, n, res);
	res[size] = '\0';
	return (res);
}
