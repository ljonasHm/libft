/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:45:48 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:41:59 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	buf[11];
	char	*str;

	neg = 1;
	i = 0;
	if (n < 0)
		neg = -1;
	while (n > 9 || n < -9)
	{
		buf[i++] = neg * (n % 10) + '0';
		n = n / 10;
	}
	buf[i] = neg * (n % 10) + '0';
	if (neg == -1)
		buf[++i] = '-';
	neg = 0;
	if (!(str = (char *)malloc(sizeof(*str) * (i + 2))))
		return (NULL);
	while (i >= 0)
		str[neg++] = buf[i--];
	str[neg] = '\0';
	return (str);
}
