/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:02:37 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:03:11 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putnchar(int c, int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	else
	{
		while (i < n)
		{
			write (1, &c, 1);
			i++;
		}
	}
	return (n);
}

int	ft_putnstr(char *str, int n)
{
	write (1, str, n);
	return (n);
}
