/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:06:57 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:16:19 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	hex_len_check(unsigned int n, t_data options);

int	print_x(unsigned int n, t_data options, char c)
{
	int	count;
	int	hex_len;
	int	longer;

	count = 0;
	hex_len = hex_len_check(n, options);
	longer = get_longer(options.prc, hex_len);
	if (!(n == 0 && options.hash == 1))
		longer = longer + options.hash * 2;
	if ((options.dash == 0 && options.dot == 1)
		|| (options.dash == 0 && options.dot == 0 && options.zero == 0))
		count += wdt_print(options, longer, ' ');
	count += prefix_print(options, c, n);
	if (options.dash == 0 && options.dot == 0 && options.zero == 1)
		count += wdt_print(options, longer, '0');
	if (options.dot == 1)
		count += prc_print(options, hex_len);
	ft_puthex(n, &count, c, options);
	if (options.dash == 1)
		count += wdt_print(options, longer, ' ');
	return (count);
}

static int	hex_len_check(unsigned int n, t_data options)
{
	int	hex_len;

	hex_len = 0;
	if (n == 0)
		hex_len = 1;
	if (n == 0 && options.dot == 1 && options.prc == 0)
		hex_len = 0;
	while (n)
	{
		n = n / 16;
		hex_len++;
	}
	return (hex_len);
}
