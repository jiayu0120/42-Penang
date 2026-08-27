/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:51:43 by jialim            #+#    #+#             */
/*   Updated: 2026/08/17 12:16:11 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	static int	i;

	if (i == 0)
		i = 1;
	if (nb < 0)
		return (0);
	if (i * i > nb)
		return (0);
	if (i * i == nb)
		return (i);
	i++;
	return (ft_sqrt(nb));
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	result;

	a = 10;
	result = ft_sqrt(a);
	printf("%d\n", result);
}
*/
