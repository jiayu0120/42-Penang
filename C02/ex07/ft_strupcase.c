/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:11:28 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 11:38:06 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <unistd.h>

int main ()
{
	char n[] = "jdauiyie";
	char n2[] = "jagfuiAdhuew";
	char *r1;
	char *r2;

	r1 = ft_strupcase(n);
	r2 = ft_strupcase(n2);
	write(1, r1, 20);
	write(1, "\n", 1);
	write(1, r2, 20);
}
*/
