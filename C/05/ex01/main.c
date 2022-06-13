#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return 1;
	else if	(nb < 0)
		return 0;
	else
		return ft_recursive_factorial(nb - 1) * nb;
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(-52));
	return 0;
}
