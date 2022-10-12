/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:29:25 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:32:28 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (*dst)
	{
		i++;
		dst++;
	}
	size--;
	while (*src && i < size)
	{
		dst++ = src++;
		i++;
	}
	*dst = 0;
	return (i);
}
