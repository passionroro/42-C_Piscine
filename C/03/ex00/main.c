#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int i;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		i = s1[a] - s2[a];
		if (i != 0)
			return (i);
		a++;
	}
	return (i);
}

int main()
{
	char	s1[] = "coucou";
	char	s2[] = "coucod";
	
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
