/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:13:13 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/17 03:21:57 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_star(const char *s1, char const *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		if (ft_strchr(sep, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	str_end(const char *s1, char const *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(sep, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		star;
	int		end;
	char	*cpy;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	star = str_star(s1, set);
	end = str_end(s1, set);
	if (star >= end)
		return (ft_strdup(""));
	cpy = (char *)malloc(sizeof(char) * (end - star + 1));
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1 + star, end - star + 1);
	return (cpy);
}
