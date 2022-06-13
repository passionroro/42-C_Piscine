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

char  **bourrin(char **tab)
{
	int y;
	int x;
	int inc;

	inc = 49;
	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
				if (tab[y][x] == 0)
				{
					while (checkifpresent(tab,x,y,inc) == 1)
						inc++;	
					tab[y][x] = inc;
				}
				inc = 49;
				x++;	
		}
		y++;
	}
	return(tab);
}

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
