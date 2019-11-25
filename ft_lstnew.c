/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:16:56 by ljonas            #+#    #+#             */
/*   Updated: 2019/11/25 18:17:10 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *newlist;

    if (!(newlist = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    if (content == NULL)
    {
        newlist -> content = NULL;
        newlist -> content_size = 0;
    }
    else
    {
        if (!(newlist -> content = malloc(sizeof(content))))
            return (NULL);
        ft_memcpy((newlist -> content), content, sizeof(content));
        newlist -> content_size = content_size;
    }
    newlist -> next = NULL;
    return (newlist);
}
