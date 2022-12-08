/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:43:06 by cd-haute          #+#    #+#             */
/*   Updated: 2022/11/09 12:50:19 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	j;
	int	k;

	j = 1;
	k = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45)
		j *= -1;
	if (*str == 43 || *str == 45)
				str++;
	while (*str >= 48 && *str <= 57)
	{
		k = k * 10 + *str - '0';
		str++;
	}
	return (k * j);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main(void)
{
	char *s = "-2147483648";
	printf("%d %d", ft_atoi(s), atoi(s));
}
*/
