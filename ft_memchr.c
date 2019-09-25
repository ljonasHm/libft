/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:33:14 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:43:04 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	char		*dst;
	size_t		i;

	i = 0;
	dst = (void *)src;
	while (i < n)
	{
		if (dst[i] == c)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
