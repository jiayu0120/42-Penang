/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 10:56:33 by jialim            #+#    #+#             */
/*   Updated: 2026/08/17 11:09:29 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	result;

	a = 3;
	b = 0;
	result = ft_iterative_power(a, b);
	printf("%d\n", result);
}
*/
