/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:49:39 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:51:00 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s != NULL)
	{
		sub = (char *)malloc(sizeof(*sub) * (len + 1));
		if (sub == NULL)
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			sub[i] = s[start];
			i++;
			start++;
		}
		sub[i] = '\0';
		return (sub);
	}
	else
		return (NULL);
}
