/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:32:48 by rohoarau          #+#    #+#             */
/*   Updated: 2021/08/16 14:16:12 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		i = s1[a] - s2[a];
		if (i != 0)
			return (i);
		a++;
	}
	return (0);
}
