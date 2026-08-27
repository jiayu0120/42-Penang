/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:46:48 by jialim            #+#    #+#             */
/*   Updated: 2026/08/17 13:01:00 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0 || nb % i == nb)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	result;

	a = 4;
	result = ft_find_next_prime(a);
	printf("%d\n", result);
}
*/
