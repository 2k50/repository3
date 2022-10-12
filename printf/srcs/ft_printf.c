/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:29:02 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/12 13:08:54 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	print_lengh;

	print_lengh = 0;
	if (format == 'c')
		print_lengh += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_lengh += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_lengh += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_lengh += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_lengh += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_lengh += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_lengh += ft_printpercent();
	return (print_lengh);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_lengh;

	i = 0;
	print_lengh = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_lengh += ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_lengh += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_lengh);
}
