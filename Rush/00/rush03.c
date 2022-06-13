/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfurrer <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:13:49 by hfurrer           #+#    #+#             */
/*   Updated: 2021/08/08 12:19:21 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	h;

	l = 1;
	h = 1;
	while (h != y + 1 && y > 0 && x > 0)
	{
		while (l != x + 1)
		{
			if ((l == 1 && h == 1) || (l == 1 && h == y))
				ft_putchar('A');
			else if ((l == x && h == 1) || (l == x && h == y))
				ft_putchar('C');
			else if (h == 1 || h == y || (l == 1 && h != 1 && h != y))
				ft_putchar('B');
			else if (l == x && h != 1 && h != y)
				ft_putchar('B');
			else if ((l != 1 && h != 1) && (h != y && l != x))
				ft_putchar(' ');
			l++;
		}
		l = 1;
		h++;
		ft_putchar('\n');
	}
}
