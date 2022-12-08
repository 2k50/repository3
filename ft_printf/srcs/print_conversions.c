/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:05:07 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:05:20 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_conversions(t_data options, va_list ap, char **str)
{
	int	count;

	count = 0;
	if (**str == 'c')
		count += print_c(va_arg(ap, int), options);
	else if (**str == 's')
		count += print_s(va_arg(ap, char *), options);
	else if (**str == 'p')
		count += print_p(va_arg(ap, unsigned long), options);
	else if (**str == 'd' || **str == 'i')
		count += print_di(va_arg(ap, int), options);
	else if (**str == 'u')
		count += print_u(va_arg(ap, unsigned int), options);
	else if (**str == 'x' || **str == 'X')
		count += print_x(va_arg(ap, unsigned int), options, **str);
	else if (**str == '%')
		count += print_c('%', options);
	(*str)++;
	return (count);
}
