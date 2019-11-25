/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:10:15 by ljonas            #+#    #+#             */
/*   Updated: 2019/11/25 19:10:17 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst -> next;
		del((*alst) -> content, (*alst) -> content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
