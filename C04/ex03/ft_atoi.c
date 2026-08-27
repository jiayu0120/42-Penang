/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:05:44 by jialim            #+#    #+#             */
/*   Updated: 2026/08/14 14:06:40 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str);

int	getresult(char *str, int a, int b, int c);

int	getresult(char *str, int a, int b, int c)
{
	a = a * 10 + (str[b] - '0');
	if (!(str[b + 1] >= '0' && str[b + 1] <= '9'))
	{
		if (c % 2 != 0)
			a = -a;
	}
	return (a);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	j;

	i = 0;
	result = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			j++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = getresult(str, result, i, j);
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (result);
		}
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("12-34"));
	printf("atoi:     %d\n\n", atoi("12-34"));

	printf("ft_atoi: %d\n", ft_atoi("-+123"));
	printf("atoi:     %d\n\n", atoi("-+123"));

	printf("ft_atoi: %d\n", ft_atoi("---123"));
	printf("atoi:     %d\n\n", atoi("---123"));

	printf("ft_atoi: %d\n", ft_atoi("  ++-+ 42"));
	printf("atoi:     %d\n\n", atoi("   ++-+ 42"));

	printf("ft_atoi: %d\n", ft_atoi("abc-42"));
	printf("atoi:     %d\n\n", atoi("42abc"));
}
*/
