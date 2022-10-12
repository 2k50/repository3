/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:19:08 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:55:22 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	count(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

char	*word(char *str, int i, int c)
{
	char	*word;
	int		j;
	int		k;

	k = 0;
	j = i;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i - j + 1));
	while (j < i)
	{
		word[k] = str[j];
		k++;
		j++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	char	**split;

	split = malloc(sizeof(char *) * (count(s, c) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			split[j++] = word(s, i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	split[j] = 0;
	return (split);
}

void	ft_free(char	**strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
		i++;
	j = i;
	i = 0;
	while (i < j)
	{
		free(strs[i]);
		i++;
	}
	free(strs[i]);
}
