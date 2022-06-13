/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:46:42 by umerat            #+#    #+#             */
/*   Updated: 2021/08/15 10:16:39 by umerat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "easychecks.c"
#include "mainlogic.c"
char sudoku(int argc, char **argv);

char sudoku(int argc, char **argv)
{
char **tab;
int i;
int argctest;

argctest = argc;
i = 0;

tab = (char**)malloc(6 * sizeof(char*));
while (i < 6)
{
	tab[i] = malloc(6 * sizeof(char));
	i++;
}
tab = assign(tab, argv);
tab = quatreunhori(tab,1,1,4);
tab = quatreunvert(tab,1,1,4);
tab = bourrin(tab);
return(tab[4][3]);
}
