/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictfill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:10:55 by umerat            #+#    #+#             */
/*   Updated: 2021/08/22 18:34:35 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	getnumlines(char *dictname)
{
	int		numlines;
	int		fd2;
	char	buf[1];
	int		readlength;

	numlines = 0;
	fd2 = open(dictname, O_RDONLY);
	if (fd2 == -1)
		return (0);
	readlength = read(fd2, buf, 1);
	while (readlength)
	{
		if (buf[0] == 58)
			numlines++;
		readlength = read(fd2, buf, 1);
	}
	close(fd2);
	return (numlines);
}

char	***mallocdict(char *dictname, int i, int numlines)
{
	char	***dict;

	numlines = getnumlines(dictname);
	dict = (char ***)malloc(sizeof(char **) * numlines + 1);
	while (i < numlines)
	{
		dict[i] = (char **)malloc(sizeof(char *) * 2);
		dict[i][0] = (char *)malloc(sizeof(char) * 60);
		dict[i][1] = (char *)malloc(sizeof(char) * 60);
		i++;
	}
	return (dict);
}

char	***dictassign(char ***dict, int fd, int i, int numlines)
{
	char	buf[1];
	int		k;
	int		j;

	while (read(fd, buf, 1) && i < numlines)
	{
		j = 0;
		k = 0;
		while (buf[0] != 10)
		{
			if (buf[0] != 58 && buf[0] != 32)
				dict[i][j][k++] = buf[0];
			else if (buf[0] == 58)
			{
				j++;
				k = 0;
			}
			read(fd, buf, 1);
		}
		if (k != 0)
			i++;
	}
	return (dict);
}

char	***dictfill(char *dictname)
{
	int		fd;
	int		numlines;
	char	***dict;

	numlines = getnumlines(dictname);
	dict = mallocdict(dictname, 0, 0);
	fd = open(dictname, O_RDONLY);
	if (fd == -1)
		return (NULL);
	dict = dictassign(dict, fd, 0, numlines);
	close(fd);
	return (dict);
}
