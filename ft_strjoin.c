/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:23:36 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:48:29 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		a;

	if (s1 != NULL && s2 != NULL)
	{
		s3 = (char *)malloc(sizeof(*s3) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (s3 == NULL)
			return (NULL);
		i = 0;
		a = 0;
		while (s1[i] != '\0')
			s3[a++] = s1[i++];
		i = 0;
		while (s2[i] != '\0')
			s3[a++] = s2[i++];
		s3[a] = '\0';
		return (s3);
	}
	else
		return (NULL);
}
