/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:33:42 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/20 21:33:43 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;
	size_t	totlen;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		totlen = ft_strlen(src) + dstsize;
	else
		totlen = ft_strlen(src) + ft_strlen(dst);
	dsti = 0;
	while (dst[dsti])
		dsti++;
	srci = 0;
	while (src[srci] && dsti < dstsize - 1)
	{
		dst[dsti] = src[srci];
		dsti++;
		srci++;
	}
	dst[dsti] = '\0';
	return (totlen);
}
