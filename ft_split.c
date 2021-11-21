/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:32:26 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/20 21:32:29 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static int	len_word(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char	**fill(const char *s, char c, int word, char **splitted)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < word)
	{
		while (*s == c)
			s++;
		len = len_word(s, c);
		splitted[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (splitted == NULL)
			return (NULL);
		j = 0;
		while (j < len)
		{
			splitted[i][j++] = *s++;
		}
		splitted[i][j] = '\0';
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}

char	**ft_split(char	const *s, char c)
{
	int		word;
	char	**splited;

	if (s == NULL)
		return (NULL);
	word = count_word(s, c);
	splited = (char **)malloc(sizeof(char *) * (word + 1));
	if (splited == NULL)
		return (NULL);
	splited = fill(s, c, word, splited);
	return (splited);
}
