/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francima <francima@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:50:04 by francima          #+#    #+#             */
/*   Updated: 2024/11/02 18:11:12 by francima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static char	*copy_word(const char *s, char c)
{
	int		len;
	char	*result;

	len = 0;
	while (s[len] && c != s[len])
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (NULL == result)
		return (NULL);
	result[len] = 0;
	while (len--)
	{
		*(result + len) = *(s + len);
	}
	return (result);
}

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (c == *s)
			in_word = 0;
		if (c != *s && !in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	**free_words(char **array, int i)
{
	while (i > -1)
		free(array[i--]);
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		in_word;
	int		i;

	in_word = 0;
	i = 0;
	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (NULL == array)
		return (NULL);
	while (*s)
	{
		if (c == *s)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			array[i++] = copy_word(s, c);
			if (NULL == array[i - 1])
				return (free_words(array, i - 1));
		}
		s++;
	}
	array[i] = 0;
	return (array);
}
//
//int	main()
//{
//	char	**args;
//
//	args = ft_split("a b c", ' ');
//	printf("%d", ft_count_words("a b c", ' '));
//}
//
