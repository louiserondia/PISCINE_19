/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <lrondia@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:30:43 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/15 16:27:23 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecrire(char a, char b, char c);

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ecrire(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ecrire(char a, char b, char c)

{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}
