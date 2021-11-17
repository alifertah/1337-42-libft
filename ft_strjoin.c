/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:43:42 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/17 03:25:08 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		len1;
	int		len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		new = malloc(sizeof(char) * (len1 + len2) + 1);
		if (new == 0)
			return (0);
		i = -1;
		while (s1[++i])
			new[i] = s1[i];
		while (s2[i++])
		{
			new[len1] = s2[i];
			len1++;
		}	
		new[len1] = '\0';
		return (new);
	}
	return (NULL);
}
/*int main()
{   
	//ft_strjoin("ali","fertah");
	printf("%s",ft_strjoin("ali","fertah"));
	return 0;
}*/
