/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:59:31 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/16 00:48:20 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	world_count(char const *s, char c)
{
	int	i;
	int	world;

	i = 0;
	world = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			world ++;
		i++;
	}
	return (world);
}

int	world_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**copy(char const *s, char c, int world, char **splited)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < world)
	{
		while (*s == c)
			s++;
		len = world_len(s, c);
		splited[i] = (char *) malloc(sizeof(char) * (len + 1));
		if (splited == NULL)
			return (NULL);
		j = 0;
		while (j < len)
			splited[i][j++] = *s++;
		splited[i][j] = '\0';
		i++;
	}
	splited[i] = NULL;
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**splited;

	if (s == NULL)
		return (NULL);
	i = world_count(s, c);
	splited = (char **)malloc(sizeof(char *) * (i + 1));
	if (!splited)
		return (NULL);
	splited = copy(s, c, i, splited);
	return (splited);
}
/*int main()
{
   char a[] = "kk hello";
   char **dest = ft_split(a,' ');
   int i,j;
   i = 0;
   while(i < 2)
   {
       
       printf("%s\n",dest[i]);
           
       i++;
   }
}*/
