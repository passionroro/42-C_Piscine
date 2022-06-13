#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb == 0 && power == 0)
		return 1;
	if (power < 0 || nb == 0)
		return 0;
	else
	{	
		while (power > 0 && nb != 0)
		{
			result *= nb;
			power--;
		}
		return result;
	}
}

int	main()
{
	printf("%d\n", ft_iterative_power(4, 0));
	return 0;
}
