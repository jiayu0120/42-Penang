/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:51:23 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 11:09:47 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
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
	char n2[] = "ja\ngfuiAdhuew";
	char r1;
	char r2;

	r1 = ft_str_is_printable(n) + '0';
	r2 = ft_str_is_printable(n2) + '0';
	write(1, &r1, 1);
	write(1, &r2, 1);
}
*/
