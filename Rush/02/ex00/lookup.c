/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:34:33 by umerat            #+#    #+#             */
/*   Updated: 2021/08/22 18:43:20 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
long	ft_atoi(char *str);
char	*ft_itoa(long nb);
char	*charmerge(char a, char b);
char	*stringmergesep(char *str1, char *str2, char sep);
void	ft_putstr(char *str);

long	ft_strcmp(char *s1, char *s2)
{
	long	i;

	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (-s2[i]);
}

char	*directsearch(char *tofind, char ***dict)
{
	long	i;

	i = 0;
	while (dict[i])
	{
		if (ft_strcmp(tofind, dict[i][0]) == 0)
		{
			return (dict[i][1]);
		}
		i++;
	}
	return ("666");
}

void	lookup(long inttofind, char ***dict)
{
	char	*tens;
	char	*units;
	char	*tofind;

	tofind = ft_itoa(inttofind);
	if (inttofind <= 20 || inttofind >= 100 \
			|| (inttofind % 10 == 0 && inttofind < 100))
		ft_putstr(directsearch(tofind, dict));
	else
	{
		tens = charmerge(tofind[0], '0');
		tens = directsearch(tens, dict);
		units = directsearch(&tofind[1], dict);
		ft_putstr(stringmergesep(tens, units, '-'));
	}
}
