/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:05:42 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 11:13:26 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		lst = lst->next;
	}
	return (lst);
}