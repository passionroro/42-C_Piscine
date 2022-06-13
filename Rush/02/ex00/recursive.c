/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:43:39 by rohoarau          #+#    #+#             */
/*   Updated: 2021/08/22 18:44:47 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
char	*lookup(long inttofind, char ***dict);
char	*ft_itoa(long nb);
int		ft_recursive_power(long nb, long power);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_prettyprint(long trio, long i, char ***dict)
{
	long	diz;
	long	cent;

	cent = trio / 100;
	diz = trio % 100;
	if (cent != 0)
	{
		lookup (cent, dict);
		write(1, " ", 1);
		lookup (100, dict);
		write(1, " ", 1);
	}
	if (diz != 0)
	{
		lookup(diz, dict);
		if (i != 0)
			write(1, " ", 1);
	}
}

void	recursive(long nb, long i, char ***dict)
{
	long	trio;
	long	diz;
	long	cent;

	if (nb >= 1000)
		recursive (nb / 1000, i + 1, dict);
	trio = nb % 1000;
	cent = trio / 100;
	diz = trio % 100;
	if (trio != 0)
	{
		ft_prettyprint(trio, i, dict);
		if (i != 0)
		{
			lookup(ft_recursive_power(10, (i * 3)), dict);
			write(1, " ", 1);
		}
	}
}
