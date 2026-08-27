/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:45:11 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 10:49:52 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <unistd.h>

int main ()
{
	char n[] = "KFISEGFIYEWG";
	char n2[] = "jagfuiAdhuew";
	char r1;
	char r2;

	r1 = ft_str_is_uppercase(n) + '0';
	r2 = ft_str_is_uppercase(n2) + '0';
	write(1, &r1, 1);
	write(1, &r2, 1);
}
*/
