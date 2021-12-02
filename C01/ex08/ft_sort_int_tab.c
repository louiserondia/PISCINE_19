/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <lrondia@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:37:41 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/17 11:55:08 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)

{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		j++;
		i = 0;
	}
}
