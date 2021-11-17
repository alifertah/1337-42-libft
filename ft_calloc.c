/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:20:43 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/14 20:16:04 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(size * count);
	if (!p)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
/*int main(void)
{
    int *p1 = ft_calloc(4, sizeof(int));
    int *p2 = ft_calloc(4, sizeof(int[4]));
    int *p3 = ft_calloc(4, sizeof *p3);   
 
    if(p2) {
        for(int n=0; n<4; ++n)
            printf("p2[%d] == %d\n", n, p2[n]);
    }
    free(p1);
    free(p2);
    free(p3);
}*/