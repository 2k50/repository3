/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sign_prefix_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:07:17 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:16:29 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	sign_print(t_data options, int number)
{
	int	count;

	count = 0;
	if (number >= 0 && options.plus == 1)
	{
		count += ft_putchar('+');
		return (count);
	}
	else if (number >= 0 && options.space == 1)
		count += ft_putchar(' ');
	else if (number < 0)
		count += ft_putchar('-');
	return (count);
}

void	get_sign(int number, t_data *options)
{
	if ((number >= 0 && options->plus == 1)
		|| (number >= 0 && options->space == 1)
		|| number < 0)
		options->sign = 1;
}

int	prefix_print(t_data options, char c, unsigned int n)
{
	int	count;

	count = 0;
	if (c == 'x' && options.hash == 1 && n != 0)
		count += ft_putnstr("0x", 2);
	if (c == 'X' && options.hash == 1 && n != 0)
		count += ft_putnstr("0X", 2);
	return (count);
}
