/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:14:26 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 11:07:12 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*z;

	if (last)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			z = ft_lstlast(*lst);
			z->next = new;
		}
	}
}
