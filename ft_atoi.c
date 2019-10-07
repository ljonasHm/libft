/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:06:39 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/26 18:25:49 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_over_value(long int num, int nb, int neg)
{
	if (num > num * 10 + nb)
	{
		if (neg == -1)
			return (0);
		else
			return (-1);
	}
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long int	num;

	num = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (ft_over_value(num, str[i] - '0', neg) == 1)
			num = num * 10 + (str[i] - '0');
		else
			return (ft_over_value(num, str[i] - '0', neg));
		i++;
	}
	return (num * neg);
}
