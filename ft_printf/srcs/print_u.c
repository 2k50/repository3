/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:06:35 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:15:37 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	uint_size_check(unsigned int n, t_data *options);

int	print_u(unsigned int n, t_data options)
{
	int	count;
	int	uint_size;
	int	longer;

	count = 0;
	uint_size = uint_size_check(n, &options);
	longer = get_longer(options.prc, uint_size);
	if (options.dash == 0 && options.dot == 0)
	{
		if (options.zero == 0)
			count += wdt_print(options, longer, ' ');
		else
			count += wdt_print(options, longer, '0');
		ft_putuint(n, &count, options);
	}
	else
	{
		if (options.dash == 0 && options.dot == 1)
			count += wdt_print(options, longer, ' ');
		count += prc_print(options, uint_size);
		ft_putuint(n, &count, options);
		if (options.dash == 1)
			count += wdt_print(options, longer, ' ');
	}
	return (count);
}

static int	uint_size_check(unsigned int n, t_data *options)
{
	int	uint_size;

	uint_size = 0;
	if (n == 0)
		uint_size = 1;
	if (n == 0 && options->dot == 1 && options->prc == 0)
		uint_size = 0;
	while (n)
	{
		n = n / 10;
		uint_size++;
	}
	return (uint_size);
}
