/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:04:45 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:13:22 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_c(int c, t_data options)
{
	int	count;
	int	padding;

	count = 0;
	padding = options.wdt - 1;
	if (options.dash == 1)
	{
		count += ft_putchar(c);
		count += ft_putnchar(' ', padding);
	}
	else
	{
		if (options.zero == 0)
			count += ft_putnchar(' ', padding);
		else if (options.zero == 1)
			count += ft_putnchar('0', padding);
		count += ft_putchar(c);
	}
	return (count);
}
