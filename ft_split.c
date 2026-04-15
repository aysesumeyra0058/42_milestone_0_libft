/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykesim <aykesim@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 08:22:06 by aykesim           #+#    #+#             */
/*   Updated: 2026/02/20 07:42:04 by aykesim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != delimiter)
		{
			count++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*copy_word(const char *word, int word_len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!ptr)
		return (NULL);
	while (i < word_len)
	{
		ptr[i] = word[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	words_len(const char *str, char delimiter)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != delimiter)
	{
		i++;
	}
	return (i);
}

static char	**free_array(char **array, int word_number)
{
	while (word_number >= 0)
	{
		free(array[word_number]);
		word_number--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		w_len;
	int		total_words;

	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < total_words)
	{
		while (*s && *s == c)
			s++;
		w_len = words_len(s, c);
		array[i] = copy_word(s, w_len);
		if (!array[i])
			return (free_array(array, i - 1));
		s += w_len;
		i++;
	}
	array[i] = NULL;
	return (array);
}
