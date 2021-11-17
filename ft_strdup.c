/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:18:40 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/07 17:15:14 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*p;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}
/*int main()
{
    char source[] = "GeeksForGeeks";
    ft_strdup(source);
 
    printf("%s", ft_strdup(source));
    return 0;
}*/
