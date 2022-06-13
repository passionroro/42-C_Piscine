#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 32;
			ft_putchar(str[i]);
		}
		while (str[i] != ' ' || str[i] != '-' || str[i] != '+')
		{
			if (str[i++] == ' ' || str[i++] == '-' || str[i++] == '+')
				ft_putchar(' ');
			i++;
		}
	}
	return 0;
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_strcapitalize(argv[1]);
	return 0;
}
