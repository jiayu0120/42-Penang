/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:08:22 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 10:24:23 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <unistd.h>
int main (void)
{
	char n[] = "12352436546";
       char n2[] = "089ayhwdg";

	ft_str_is_numeric(n);
 	ft_str_is_numeric(n2);
	
	write(1, &n, 1);
	write(1, &n2, 1);
}
*/
