/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:03:44 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:03:57 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb2;
	char	c;

	nb2 = n;
	if (n < 0)
		nb2 = nb2 * (-1);
	if (nb2 / 10 != 0)
		ft_putnbr(nb2 / 10, count);
	c = nb2 % 10 + '0';
	*count += ft_putchar(c);
}

void	ft_putuint(unsigned int n, int *count, t_data options)
{
	char	c;

	if (n == 0 && options.dot == 1 && options.prc == 0)
		return ;
	else
	{
		if (n / 10 != 0)
			ft_putuint(n / 10, count, options);
		c = n % 10 + '0';
		*count += ft_putchar(c);
	}
}

void	ft_puthex(unsigned long n, int *count, char x, t_data options)
{
	char	c;

	if (n == 0 && options.dot == 1 && options.prc == 0)
		return ;
	else
	{
		if (n / 16 != 0)
			ft_puthex(n / 16, count, x, options);
		if (n % 16 > 9 && x == 'X')
			c = n % 16 - 10 + 'A';
		else if (n % 16 > 9 && x == 'x')
			c = n % 16 - 10 + 'a';
		else
			c = n % 16 + '0';
		*count += ft_putchar(c);
	}
}
