/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:22:04 by jialim            #+#    #+#             */
/*   Updated: 2026/08/24 19:08:48 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		total_len(int size, char **strs, char *sep);
int		ft_strlen(char *str);
void	copy(char *join, int *k, char *str);

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	copy(char *join, int *k, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		join[*k] = str[i];
		i++;
		(*k)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*join;

	if (size == 0)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	join = malloc(sizeof(char) * (total_len(size, strs, sep) + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		copy(join, &k, strs[i]);
		if (i < size - 1)
			copy(join, &k, sep);
		i++;
	}
	join[k] = '\0';
	return (join);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hello", "World", "42"};
	char	*result;

	result = ft_strjoin(3, strs, ", ");

	printf("Result: %s\n", result);

	free(result);
	return (0);
}
*/
