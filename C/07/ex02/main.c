#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (min >= max)
	{	
		tab[] = NULL;
		return 0;
	}
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	*range = tab;
	return (max - min);	
}

int	main()
{
	ft_ultimate_range(range, 12, 18);
	return (0);
}
