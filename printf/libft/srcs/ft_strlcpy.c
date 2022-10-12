/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:25:37 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:32:18 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (src == 0 || dst == 0)
		return (0);
	dstsize--;
	while (src && 0 < dstsize)
	{
		dst++ = src++;
		dstsize--;
	}
	*dst = 0;
	i = 0;
	while (src[i])
		i++;
	return (i);
}
