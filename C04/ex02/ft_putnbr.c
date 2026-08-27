/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:45:05 by jialim            #+#    #+#             */
/*   Updated: 2026/08/13 14:04:11 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long	n;
	char	a;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		a = n % 10 + '0';
		write(1, &a, 1);
	}
	else
	{
		a = n % 10 + '0';
		write(1, &a, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(-42);
	write(1, "\n", 1);

	ft_putnbr(123456);
	write(1, "\n", 1);

	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	return (0);
}
*/
