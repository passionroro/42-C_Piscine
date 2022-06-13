/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easychecks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:02:02 by umerat            #+#    #+#             */
/*   Updated: 2021/08/15 10:38:25 by umerat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char **assign(char **tab, char **argv);
char **quatreunhori(char **tab, int x, int y, int inc);
char **quatreunvert(char **tab, int x, int y, int inc);

char **assign(char **tab, char **argv)
{
	int x;
	int y;
	int i;
	char **argv2;

	argv2 = argv;
	x=1;
	y=0;
	i=1;

	while (i<= 16)
		{
		if (i <= 4)
			tab[0][i] = argv[i][0];
		if (i > 4 && i <= 8)
			tab[5][i-4] = argv[i][0];
		if (i > 8 && i <= 12)
			tab[i-8][0] = argv[i][0];
		if (i > 12 && i <= 16)
			tab[i-12][5] = argv[i][0];
		i++;
		}
return(tab);
}

char **quatreunhori(char **tab, int x, int y, int inc)
{
	while (y < 5)
	{
		if ((tab[y][0] == 52 && tab[y][5] == 49) || (tab[y][0] == 49 && tab[y][5] == 52))
			{
			if (tab[y][0] == 52)
			{
				inc = 49;
				while (x < 5)
					tab[y][x++] = inc++;
			}
			if (tab[y][0] == 49)
			{
				inc = 52;
				while (x < 5)
					tab[y][x++] = inc--;
			}
			
		}
	y++;
	}
			return(tab);
}

char **quatreunvert(char **tab, int x, int y, int inc)
{
	while (x < 5)
	{
		if ((tab[0][x] == 52 && tab[5][x] == 49) || (tab[0][x] == 49 && tab[5][x] == 52))
			{
			if (tab[0][x] == 52)
			{
				inc = 49;
				while (y < 5)
					tab[y++][x] = inc++;
			}
			if (tab[0][x] == 49)
			{
				inc = 52;
				while (y < 5)
					tab[y++][x] = inc--;
			}	
		}
	x++;
	}
			return(tab);
}


