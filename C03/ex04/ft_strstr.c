/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:34:02 by jialim            #+#    #+#             */
/*   Updated: 2026/08/12 13:51:47 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strstr("Hello World", "World");

	if (result != 0)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return (0);
}
*/
