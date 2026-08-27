/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:52:59 by jialim            #+#    #+#             */
/*   Updated: 2026/08/14 11:48:38 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[9] = "Hello ";
	char	src[] = "World";

	printf("result: %s\n", dest);
	printf("return: %u\n", ft_strlcat(dest, src, 9));
	printf("result: %s\n", dest);
	return (0);
}
*/
