/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:16:12 by jialim            #+#    #+#             */
/*   Updated: 2026/08/09 12:16:53 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (++row <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if (row == 1 && col == 1)
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('C');
			else if (row == y && col == x)
				ft_putchar('A');
			else if ((col == 1 || col == x) || (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
