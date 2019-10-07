/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:33:14 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/26 21:15:57 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*dst;
	size_t			i;

	i = 0;
	c2 = (unsigned char)c;
	dst = (unsigned char *)src;
	while (i < n)
	{
		if (dst[i] == c2)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
