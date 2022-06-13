#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
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

	printf("%s\n", ft_strncat(dest, src, 6));
	return (0);
}
