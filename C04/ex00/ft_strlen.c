/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:28:04 by jialim            #+#    #+#             */
/*   Updated: 2026/08/13 13:34:44 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Hello, world!";
	printf("String: %s\n", str);
	printf("Length: %d\n", ft_strlen(str));
	return (0);
}
*/
