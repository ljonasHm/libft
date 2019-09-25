/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:02:21 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 21:29:06 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*src2;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	src2 = (char *)malloc(sizeof(*src2) * (i + 1));
	if (src2 == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			src2[i] = src[i];
			i++;
		}
		src2[i] = '\0';
	}
	return (src2);
}
