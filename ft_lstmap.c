/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:46:37 by ljonas            #+#    #+#             */
/*   Updated: 2019/11/25 19:46:42 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	**alst;
	t_list	*newlst;

	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		if (!(newlst = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		newlst = f(lst);
		if (!(*alst))
		{
			if (!(alst = (t_list **)malloc(sizeof(t_list))))
			{
				free(newlst);
				return (NULL);
			}
			*alst = newlst;
		}
		newlst = newlst -> next;
		lst = lst -> next;
	}
	return (*alst);
}
