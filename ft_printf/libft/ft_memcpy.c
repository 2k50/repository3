/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:36:14 by cd-haute          #+#    #+#             */
/*   Updated: 2022/11/09 13:33:18 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p1;
	const char	*p2;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	p1 = (char *)dst;
	p2 = (const char *)src;
	while (n--)
		p1[n] = p2[n];
	return (dst);
}
