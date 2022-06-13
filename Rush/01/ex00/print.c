#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}


//function prints the table
void	ft_print(char **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(tab[y][x]);
			if (x++ < 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
