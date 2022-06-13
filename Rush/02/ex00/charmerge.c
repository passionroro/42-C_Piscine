/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charadd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:52:47 by umerat            #+#    #+#             */
/*   Updated: 2021/08/22 18:31:12 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*charmerge(char a, char b)
{
	char	*dest;

	dest = (char *)malloc(3 * sizeof(char));
	dest[0] = a;
	dest[1] = b;
	dest[2] = '\0';
	return (dest);
}

char	*stringmergesep(char *str1, char *str2, char sep)
{	
	char	*dest;
	int		totalsize;
	long	i;
	long	j;

	j = 0;
	i = 0;
	totalsize = ft_strlen(str1) + ft_strlen(str2) + 1;
	dest = malloc(totalsize + 1);
	while (str1[i])
	{
		dest[i] = str1[i];
		i++;
	}
	dest[i] = sep;
	i++;
	while (str2[j])
	{
		dest[i + j] = str2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
