/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:36:17 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 11:18:36 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*element;
	t_list	*noob;

	if (!lst || !f)
		return (0);
	element = f(lst);
	noob = element;
	while (lst->next)
	{
		lst = lst->next;
		element->next = f(lst);
		if (!element->next)
		{
			free(element->next);
			return (0);
		}
		else
			element = element->next;
	}
	return (noob);
}
