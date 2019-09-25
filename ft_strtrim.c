/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:34:51 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:51:08 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*dst;
	int		i;
	int		len;
	int		a;

	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	i = 0;
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
		i++;
	}
	if (len < 0)
		len = 0;
	if (!(dst = (char *)malloc(sizeof(*dst) * (len + 1))))
		return (NULL);
	a = 0;
	while (a < len)
		dst[a++] = s[i++];
	dst[a] = '\0';
	return (dst);
}
