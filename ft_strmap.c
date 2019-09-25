/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:37:31 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:49:01 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ns;
	int		i;

	if (s != NULL)
	{
		i = 0;
		ns = (char *)malloc(sizeof(*ns) * (ft_strlen(s) + 1));
		if (ns == NULL)
			return (NULL);
		while (s[i])
		{
			ns[i] = f(s[i]);
			i++;
		}
		ns[i] = '\0';
		return (ns);
	}
	else
		return (NULL);
}
