/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:07:15 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:42:45 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = (char*)dst;
	s = (const char*)src;
	while (n-- > 0)
	{
		if ((*d++ = *s++) == (char)c)
			return (d);
	}
	return (NULL);
}
