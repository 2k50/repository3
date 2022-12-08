/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:16:25 by cd-haute          #+#    #+#             */
/*   Updated: 2022/11/09 13:35:24 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p1;
	const char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (dst == src)
		return (dst);
	if (p2 < p1)
		while (len--)
			p1[len] = p2[len];
	else
		while (len--)
			*p1++ = *p2++;
	return (dst);
}
