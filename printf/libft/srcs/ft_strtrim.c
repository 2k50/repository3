/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:48:10 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:53:38 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc(sizeof(char) * ft_strlen(s1));
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
		{
			j++;
			if (set[j] == 0)
			{
				str[k] = s1[i];
				k++;
			}
		}
		i++;
	}
	str[i] = 0;
	return (str);
}
