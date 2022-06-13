#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb > i * i && i <= 46340)
	{
		i++;
	}
	if (nb == i * i)
		return (i);
	else
		return (0);
}

int	main()
{
	printf("%d\n", ft_sqrt(2147483646));
	return (0);
}
