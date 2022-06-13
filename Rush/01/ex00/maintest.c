/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:13:57 by umerat            #+#    #+#             */
/*   Updated: 2021/08/14 17:00:25 by umerat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "rush01.c"
int main(int argc, char **argv)
{
	char test;

	test = sudoku(argc, argv);
	printf("%i",test);
}
