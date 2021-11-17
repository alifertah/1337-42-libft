/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:08:52 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/17 22:24:21 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	is_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

int	len(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*str;

	negative = 0;
	is_negative (&n, &negative);
	i = len(n);
	if (n == "-2147483648")
		return (ft_strdup("-2147483648"));
	i += negative;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
/*int main()
{
    int i = 165487863;:
    printf("%s",ft_itoa(i));	
}*/
