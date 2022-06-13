#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while ((str[i] > 47  && str[i] < 58) && (str[i++] > 47 && str[i++] < 58))
		{
			result = result*10 + str[i] - '0';
			i++;
		}
		if (str[i] == 45)
			sign++;
		if (str[i] == 43 || (str[i] > 0 && str[i] <= 32) || str[i] == 45)
			i++;
		else
			break;
	}
	if (sign % 2 == 0)
		return (result);
	return (-result);
}

int	main()
{
	printf("%d\n", ft_atoi("  +0-+-35131234d5"));
	return 0;
}
