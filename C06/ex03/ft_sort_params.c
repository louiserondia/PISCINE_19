/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:29:25 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/25 13:35:05 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_strcmp(int i, int j, char **argv)
{
	char	*temp;

	while (argv[i][j] >= argv[i + 1][j])
	{
		if (argv[i][j] == argv[i + 1][j])
			j++;
		else
		{	
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 1;
	while (k < argc)
	{	
		while (i < argc - 1)
		{
			ft_strcmp(i, j, argv);
			i++;
			j = 0;
		}
		i = 1;
		k++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}
