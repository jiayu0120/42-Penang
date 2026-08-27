/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:56:22 by jialim            #+#    #+#             */
/*   Updated: 2026/08/14 11:39:55 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	*b;
	int		result;

	a = "ABCDEFGHIJK";
	b = "ABCDEHOFUO";
	result = ft_strncmp(a, b, 8);
	printf("%d\n", result);
	return (0);
}
*/
