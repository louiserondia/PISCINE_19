/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <lrondia@student.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:41:27 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/15 16:28:37 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b, int c, int d)
{
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if (a < c || (a == c && b < d))
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, " ", 1);
				write(1, &c, 1);
				write(1, &d, 1);
				if ((a != '9') || (b != '8') || (c != '9') || (d != '9'))
					write(1, ", ", 2);
			}
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			{
				ft_write(a, b, c, d);
			}
			b++;
		}
		a++;
	}
}
