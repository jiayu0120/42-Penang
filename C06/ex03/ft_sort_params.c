/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 20:13:32 by jialim            #+#    #+#             */
/*   Updated: 2026/08/23 21:07:56 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	is_greater(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
		i++;
	return (a[i] > b[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < argc - 1)
		{
			{
				if (is_greater(argv[i], argv[i + 1]))
				{
					swap(&argv[i], &argv[i + 1]);
					swapped = 1;
				}
			}
			i++;
		}
	}
	print(argc, argv);
}
