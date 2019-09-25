/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:32:28 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:46:26 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*dst;

	dst = (char*)str;
	while (*dst && *dst != ch)
		dst++;
	if (*dst == ch)
		return (dst);
	return (NULL);
}
