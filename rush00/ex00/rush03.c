/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:06:22 by jialim            #+#    #+#             */
/*   Updated: 2026/08/09 12:11:26 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (col == 1 && (row == 1 || row == y))
				ft_putchar('A');
			else if ((col == x && (row == 1 || row == y)))
				ft_putchar('C');
			else if ((col == 1 || col == x) || (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
