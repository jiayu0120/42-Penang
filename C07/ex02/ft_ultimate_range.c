/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:22:19 by jialim            #+#    #+#             */
/*   Updated: 2026/08/24 17:21:32 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, 3, 8);

	printf("Size: %d\n", size);

	if (range == NULL)
	{
		printf("Range is NULL\n");
		return (1);
	}

	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);
	return (0);
}*/
