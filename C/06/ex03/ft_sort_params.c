#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

char	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] - s2[a] != 0)
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	j;
	char	*swap;

	j = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) != 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
				j = 0;
			}
			j++;
		}
		ft_print(argc, argv);
	}
	return 0;
}
