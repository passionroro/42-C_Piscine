#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	a;
	int i;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		i = s1[a] - s2[a];
		if (i != 0)
			return (i);
		a++;
	}
	return (0);
}

int main()
{
	char	s1[] = "coucou";
	char	s2[] = "coucod";
	
	printf("%d", ft_strncmp(s1, s2, 0));
}
