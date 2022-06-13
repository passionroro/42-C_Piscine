#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

//il peut etre interessant de :
// 1 : creer une fonction qui alloue la place necessaire (ft_alloc)
// 2 : l'appeler dans la premiere ligne du programme
// 3 : elle return le tableau

char    *ft_strdup(char *src)
{
    char    *dest;
    int        i;
    int        len;

    i = 0;
    len = 0;
    while (src[len] != '\0')
        len++;
    dest = (char *)malloc(sizeof(*dest) * (len + 1));
    if (dest == NULL)
        return (0);
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		len_strs;
	int		i;

	i = 0;
	len = ft_strlen(sep);
	while (i < size)
	{
		len_strs += ft_strlen(strs[i]);
		i++;
	}
	if (size == 0)
	{
		tab = malloc(sizeof(tab) * 1);
        *strs = tab;
		return (*strs);
	}
	tab = (char *)malloc(sizeof(tab) * (len + 1) + (len * (size - 1)));
	if (tab == NULL)
		return (NULL);
	*strs = tab;
    ft_strdup(size, strs, sep);
	return (*strs);
}

int	main(void)
{
	char	*strs[] = {"Coucou", "les", "amis"};

	ft_strjoin(3, strs, "-_B_-");
	return (0);
}
