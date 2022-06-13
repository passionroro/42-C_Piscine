void	ft_putstr(char str*);

int	atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	while (str[i] != '\0' && i < 32)
	{
		if (str[i] > '4' || str[i] < '1')
		{
			ft_putstr("Error: out of range\n");
			return (0);
		}
		else if (str[i] >= '1' && str[i] <= '4' && i++ == ' ')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		else if (str[i] == ' ')
			i = '\0';
	}
	return result;
}
