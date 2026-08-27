/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:40:12 by jialim            #+#    #+#             */
/*   Updated: 2026/08/11 11:52:34 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
#include <unistd.h>

int main ()
{
	char n[] = "AGADKLie";
	char n2[] = "jaADSiAdhuew";
	char *r1;
	char *r2;

	r1 = ft_strlowcase(n);
	r2 = ft_strlowcase(n2);
	write(1, r1, 20);
	write(1, "\n", 1);
	write(1, r2, 20);
}
*/
