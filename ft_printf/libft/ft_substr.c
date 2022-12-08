/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:34 by cd-haute          #+#    #+#             */
/*   Updated: 2022/11/16 14:27:35 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (str == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(str) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(str + start);
	if (new_len < len)
		len = new_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
