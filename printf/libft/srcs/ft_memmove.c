/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:16:25 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:31:56 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = dst;
	p2 = src;
	if (p2 < p1)
		while (0 < len--)
			p1[len] = p2[len];
	else
		while (0 < len--)
			p1++ = p2++;
	return (dst);
}
