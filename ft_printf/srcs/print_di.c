/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:05:28 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:14:08 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	sequence_one(t_data options, int number, int num_len, int longer);
static int	sequence_two(t_data options, int number, int num_len, int longer);
static int	sequence_three(t_data options, int number, int longer);
static int	sequence_four(t_data options, int number, int longer);

int	print_di(int number, t_data options)
{
	int	count;
	int	digit_number;
	int	longer;

	count = 0;
	digit_number = digit_number_check(number);
	get_sign(number, &options);
	longer = get_longer(options.prc, digit_number) + options.sign;
	if (number == 0 && options.dot == 1 && options.prc == 0)
		longer = longer - 1;
	if (options.dash == 1)
		count += sequence_one(options, number, digit_number, longer);
	if (options.dash == 0 && options.dot == 1)
		count += sequence_two(options, number, digit_number, longer);
	if (options.dash == 0 && options.dot == 0)
	{
		if (options.zero == 1)
			count += sequence_three(options, number, longer);
		else
			count += sequence_four(options, number, longer);
	}
	return (count);
}

static int	sequence_one(t_data options, int number, int num_len, int longer)
{
	int	count;

	count = 0;
	count += sign_print(options, number);
	count += prc_print(options, num_len);
	if (!(number == 0 && options.dot == 1 && options.prc == 0))
		ft_putnbr(number, &count);
	count += wdt_print(options, longer, ' ');
	return (count);
}

static int	sequence_two(t_data options, int number, int num_len, int longer)
{
	int	count;

	count = 0;
	count += wdt_print(options, longer, ' ');
	count += sign_print(options, number);
	count += prc_print(options, num_len);
	if (!(number == 0 && options.dot == 1 && options.prc == 0))
		ft_putnbr(number, &count);
	return (count);
}

static int	sequence_three(t_data options, int number, int longer)
{
	int	count;

	count = 0;
	count += sign_print(options, number);
	count += wdt_print(options, longer, '0');
	ft_putnbr(number, &count);
	return (count);
}

static int	sequence_four(t_data options, int number, int longer)
{
	int	count;

	count = 0;
	count += wdt_print(options, longer, ' ');
	count += sign_print(options, number);
	ft_putnbr(number, &count);
	return (count);
}
