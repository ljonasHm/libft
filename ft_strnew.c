/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:08:45 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/27 18:41:43 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str && size + 1 > 0)
	{
		i = 0;
		while (i <= size)
		{
			str[i] = 0;
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
