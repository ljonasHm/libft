/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:42:32 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:50:32 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char*)str;
	while (*dst != '\0')
	{
		dst++;
		i++;
	}
	if (*dst == ch)
		return (dst);
	while (*dst != ch && i > 0)
	{
		dst--;
		i--;
	}
	if (*dst == ch)
		return (dst);
	else
		return (NULL);
}
