/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:03:24 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:03:36 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	print(va_list ap, char *input);

int	ft_printf(const char *string_input, ...)
{
	int		count;
	char	*input;
	va_list	ap;

	input = (char *) string_input;
	va_start(ap, string_input);
	count = print(ap, input);
	va_end(ap);
	return (count);
}

static int	print(va_list ap, char *input)
{
	int	count;

	count = 0;
	while (*input)
	{
		if (*input != '%')
		{
			count += ft_putchar(*input);
			input++;
		}
		else
		{
			input++;
			count += parsing_options(ap, &input);
		}
	}
	return (count);
}
