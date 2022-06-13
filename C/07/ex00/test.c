#include <string.h>
#include <stdio.h>

char	*strdup(const char *s1);

int	main()
{
	printf("%s\n", strdup("coucou"));
	return 0;
}
