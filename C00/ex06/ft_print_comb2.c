/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:43:55 by jialim            #+#    #+#             */
/*   Updated: 2026/08/27 14:07:36 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c[5];

	a = 0;
	c[2] = ' ';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c[0] = a / 10 + '0';
			c[1] = a % 10 + '0';
			c[3] = b / 10 + '0';
			c[4] = b % 10 + '0';
			write(1, &c, 5);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return (0);
}
*/
