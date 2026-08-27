/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:25:59 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 10:40:15 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <unistd.h>

int main ()
{
	char n[] = "jdauiyie";
	char n2[] = "jagfuiAdhuew";
	char r1;
	char r2;

	r1 = ft_str_is_lowercase(n) + '0';
	r2 = ft_str_is_lowercase(n2) + '0';
	write(1, &r1, 1);
	write(1, &r2, 1);
}
*/
