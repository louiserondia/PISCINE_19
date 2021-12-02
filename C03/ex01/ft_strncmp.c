/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:16:18 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/22 17:04:34 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i] && i < n)
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[20] = "ab";
	char b[20] = "";
	int	n = 4;

	strncmp(a, b, n);
	printf("%d\n", strncmp(a, b, n));
	ft_strncmp(a, b, n);
	printf("%d\n", ft_strncmp(a, b, n));
}*/
