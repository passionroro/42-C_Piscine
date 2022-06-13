#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char	*dest;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	src = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strdup("coucou"));
	return 0;
}
