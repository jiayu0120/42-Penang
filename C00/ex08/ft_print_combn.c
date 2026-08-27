/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 14:41:34 by jialim            #+#    #+#             */
/*   Updated: 2026/08/27 14:29:35 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(char *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &digits[i], 1);
		i++;
	}
}

int	is_last(char *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (digits[i] != '9' - n + 1 + i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_combn(char *digits, int n, int pos)
{
	char	start;

	if (pos == n)
	{
		print_number(digits, n);
		if (!is_last(digits, n))
			write(1, ", ", 2);
		return ;
	}
	if (pos == 0)
		start = '0';
	else
		start = digits[pos - 1] + 1;
	while (start <= '9')
	{
		digits[pos] = start;
		ft_combn(digits, n, pos + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	digits[9];

	ft_combn(digits, n, 0);
}
/*
int main(void)
{
	ft_print_combn(2);
}
*/
