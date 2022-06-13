#define BUF_SIZE 4096
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	ft_calculaire(char *board)
{
	int	i;
	int	x;
	int	y;
	
	y = 0;
	i = 0;
	while (board[i])
	{
		while (board[i] != '\n')
			++i;
		i += 2;
		++y;
	}
	x = (i + 2) / (y + 1);
	return (x * y);
}

int	main(int argc, char **argv)
{
	char	board[BUF_SIZE];
	int		open_b;
	int		len_b;
	int		result;
	int		x;
	int		y;

	x = 0;
	y = 0;
	open_b = open("prebsq_file", O_RDONLY);
	if (open_b == -1)
	{
		ft_putstr("open() failed\n");
		return (0);
	}
	len_b = read(open_b, board, BUF_SIZE);
	board[len_b] = '\0';
	ft_putstr(board);
	printf("aire = %d\n", ft_calculaire(board));
	if (close(open_b) == -1)
	{
		ft_putstr("close()) failed\n");
		return (1);
	}
	return (result);
}
