/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:16:43 by jialim            #+#    #+#             */
/*   Updated: 2026/08/17 12:45:53 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
	result = ft_is_prime(a);
	printf("%d\n", result);
}
*/
