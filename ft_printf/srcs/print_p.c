/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:05:51 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:14:31 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	add_len_check(unsigned long n);

int	print_p(unsigned long address, t_data options)
{
	int	count;
	int	add_len;

	count = 0;
	add_len = add_len_check(address);
	if (options.dash == 0)
		count += wdt_print(options, add_len + 2, ' ');
	count += ft_putnstr("0x", 2);
	ft_puthex(address, &count, 'x', options);
	if (options.dash == 1)
		count += wdt_print(options, add_len + 2, ' ');
	return (count);
}

static int	add_len_check(unsigned long n)
{
	int	add_len;

	add_len = 0;
	if (n == 0)
		add_len = 1;
	while (n)
	{
		n = n / 16;
		add_len++;
	}
	return (add_len);
}
