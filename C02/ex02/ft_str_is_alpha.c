/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:13:32 by jialim            #+#    #+#             */
/*   Updated: 2026/08/10 12:41:55 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*num;
	char	*num2;
	
	num = "laksdj";
	num2 = "ddajo)%";

	printf("%d\n", ft_str_is_alpha(num));
	printf("%d\n", ft_str_is_alpha(num2));
}
*/
