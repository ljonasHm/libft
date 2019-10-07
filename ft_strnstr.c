/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:25:58 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/26 20:19:21 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strwf, const char *strtf, size_t n)
{
	size_t i;
	size_t a;

	i = 0;
	if (*strtf == '\0')
		return ((char*)strwf);
	while (strwf[i] != '\0' && i <= n)
	{
		a = 0;
		if (strwf[i] == strtf[a])
		{
			while (strtf[a] != '\0' && strwf[i] == strtf[a])
			{
				a++;
				i++;
			}
			if (strtf[a] == '\0' && i <= n)
				return ((char*)strwf + (i - a));
		}
		else
			i++;
	}
	return (NULL);
}
