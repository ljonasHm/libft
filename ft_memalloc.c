/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:33:24 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:42:24 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*str;
	unsigned char	*i;

	str = (void *)malloc(sizeof(void *) * size);
	if (str)
	{
		i = str;
		while (size)
		{
			*i = 0;
			i++;
			size--;
		}
		return (str);
	}
	else
		return (NULL);
}
