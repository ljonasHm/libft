/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:44:36 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:54:14 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *strwf, const char *strtf)
{
	int i;
	int a;

	i = 0;
	if (*strtf == '\0')
		return ((char*)strwf);
	while (strwf[i] != '\0')
	{
		a = 0;
		if (strwf[i] == strtf[a])
		{
			while (strtf[a] != '\0' && strwf[i] == strtf[a])
			{
				a++;
				i++;
			}
			if (strtf[a] == '\0')
				return ((char*)strwf + (i - a));
			else
				i = i - a + 1;
		}
		i++;
	}
	return (NULL);
}
