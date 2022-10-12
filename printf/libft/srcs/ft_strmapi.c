/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:16 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/11 10:58:10 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include<stdio.h>
char ft(int i, char str)
{
	if (str == 32)
		return (i + 48);
	return (str);
}
int main()
{
	char	str[6] = "---- ";
	int		i = 0;
	while (str[i] != '\0')
	{
		printf("%c\n", ft(i, str[i]));
		i++;
	}
	return 0;
}
*/
