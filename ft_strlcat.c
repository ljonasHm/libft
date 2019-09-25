/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:11:49 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:48:38 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (dst[i] && size > 0)
	{
		i++;
		size--;
	}
	a = i;
	while (src[n] && size > 1)
	{
		dst[i++] = src[n++];
		size--;
	}
	if (size == 1 || src[n] == '\0')
		dst[i] = '\0';
	return (a + ft_strlen((char*)src));
}
