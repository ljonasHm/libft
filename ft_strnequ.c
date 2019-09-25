/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:38:58 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:49:44 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
			i++;
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
	else if (s1 == NULL && s2 == NULL)
		return (1);
	else
		return (0);
}
