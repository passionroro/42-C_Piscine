void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < (size / 2))
	{
		j = tab[size - i];
		tab[size - i] = tab[i];
		tab[i] = j;
		i++;
	}
}
