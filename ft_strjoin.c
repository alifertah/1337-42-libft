/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:43:42 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/18 01:30:44 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*ptr;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		i = -1;
		ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (ptr == NULL)
			return (NULL);
		while (s1[++i])
			ptr[i] = s1[i];
		i = 0;
		while (s2[i])
		{
			ptr[len1 + i] = s2[i];
			i++;
		}
		ptr[len1 + len2] = '\0';
		return (ptr);
	}
	return (NULL);
}
/*int main()
{   
	//ft_strjoin("ali","fertah");
	printf("%s",ft_strjoin("","ahlvasbalfglfouktygjh"));
	return 0;
}*/
