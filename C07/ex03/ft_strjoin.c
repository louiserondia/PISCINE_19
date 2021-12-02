/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:12:02 by lrondia           #+#    #+#             */
/*   Updated: 2021/12/02 20:55:16 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_putstr(char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			res[n++] = strs[i][j++];
		j = 0;
		if (strs[i + 1] != '\0')
		{
			while (sep[j])
				res[n++] = sep[j++];
		}
		i++;
	}
	res[n] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*res;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	res = malloc(sizeof(char) * (count + 1));
	return (ft_putstr(strs, sep, res));
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s\n",  ft_strjoin(argc - 1, argv + 1, "."));
}*/
