/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:17:25 by jialim            #+#    #+#             */
/*   Updated: 2026/08/27 12:42:39 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write(1, &digit[0], 1);
				write(1, &digit[1], 1);
				write(1, &digit[2], 1);
				if (digit[0] != '7' || digit[1] != '8' || digit[2] != '9')
					write(1, ", ", 2);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
