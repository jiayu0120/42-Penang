/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:02:08 by jialim            #+#    #+#             */
/*   Updated: 2026/08/24 16:21:26 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	while ((min + i) < max)
		i++;
	range = malloc(sizeof(int) * i);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(3, 8);

	if (range == NULL)
	{
		printf("NULL\n");
		return (1);
	}

	i = 0;
	while (i < 5)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);
	return (0);
}
*/
