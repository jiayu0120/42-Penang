/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialim <jialim@student.42penang.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:24:25 by jialim            #+#    #+#             */
/*   Updated: 2026/08/26 19:56:42 by jialim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*copy_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = ft_strlen(str, charset);
	word = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**result;
	int		count;

	i = 0;
	j = 0;
	count = word_count(str, charset);
	result = malloc(sizeof(char *) * (count + 1));
	while (str[i])
	{
		if (is_separator(str[i], charset))
			i++;
		else
		{
			result[j] = copy_word(&str[i], charset);
			if (!result[j])
				return (NULL);
			j++;
			i += ft_strlen(&str[i], charset);
		}
	}
	result[j] = NULL;
	return (result);
}
/*
#include <stdio.h>

static void	print_split(char **res)
{
	int	i;
 
	if (!res)
	{
		printf("NULL result\n");
		return ;
	}
	i = 0;
	while (res[i])
	{
		printf("[%s]\n", res[i]);
		i++;
	}
	printf("---\n");
}
 
int	main(void)
{
	print_split(ft_split("hello world", " "));
	print_split(ft_split("  hello   world  ", " "));
	print_split(ft_split("a,,b,,,c", ","));
	print_split(ft_split(",,,", ","));
	print_split(ft_split("", "abc"));
	print_split(ft_split("42 is##the answer", " #"));
	print_split(ft_split("noseparatorshere", ""));
	print_split(ft_split("one.two,three;four", ".,;"));
	return (0);
}
*/
