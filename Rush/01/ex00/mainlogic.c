/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainlogic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:46:46 by umerat            #+#    #+#             */
/*   Updated: 2021/08/15 13:34:15 by umerat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  **bourrin(char **tab);

int checkifpresent(char **tab, int x, int y, int num);

char **onlypossible(char **tab, int x, int y, int num)

int i;

while 

int checkifpresent(char **tab,int x, int y, int num)
{
	int orix;
	int oriy;

	orix = x;
	oriy = y;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x] == num)
			return(1);
	y++;
	}
	y = oriy;
	x = 1;
	while (x < 5)
	{
		if (tab[y][x] == num)
			return(1);	
	x++;
	}
	return(0);

}
