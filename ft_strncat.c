/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:51:00 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/26 19:32:32 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t a;
	size_t i;

	a = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[a] != '\0' && a < n)
	{
		dst[i] = src[a];
		a++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
