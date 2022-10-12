/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:34 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 11:01:50 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * (len - start) + 1);
	if (!sub || (start > len))
		return (0);
	while (start < len)
	{
		sub[i] = str[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
