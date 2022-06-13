#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "this is ";
	char	src[] = "hard";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
