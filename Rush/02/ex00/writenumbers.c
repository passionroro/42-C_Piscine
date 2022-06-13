/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writenumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:00:23 by umerat            #+#    #+#             */
/*   Updated: 2021/08/22 18:45:35 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

long	ft_atoi(char *str);
void	loop_argv(char ***dict, char *argv, long i);
char	***dictfill(char *dictname);
void	recursive(long nb, long i, char ***dict);

int	manageerrors(int argc, char **argv, char ***dict)
{
	long	check;

	if (dict == NULL)
	{
		write(2, "Dict Error\n", 11);
		return (404);
	}
	if (argc == 2)
		check = ft_atoi(argv[1]);
	if (argc == 3)
		check = ft_atoi(argv[2]);
	if (check > 4294967295 || check < 0)
	{
		write(2, "Error\n", 6);
		return (404);
	}
	if (check > 1000000000000 || check < 0)
	{
		write(2, "Dict Error\n", 11);
		return (404);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	***dict;

	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
		dict = dictfill("numbers.dict");
	else
		dict = dictfill(argv[1]);
	if (manageerrors(argc, argv, dict) != 0)
		return (0);
	if (argc == 2)
		recursive(ft_atoi(argv[1]), 0, dictfill("numbers.dict"));
	if (argc == 3)
		recursive(ft_atoi(argv[2]), 0, dictfill(argv[1]));
	return (0);
}
