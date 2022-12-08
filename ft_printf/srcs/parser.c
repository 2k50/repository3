/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:04:04 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:04:15 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	parsing_flags(t_data *options, char **str);
static void	parsing_wdt_prc(int *num, char **str);

int	parsing_options(va_list ap, char **str)
{
	int		count;
	t_data	options;

	count = 0;
	ft_memset(&options, 0, sizeof(t_data));
	parsing_flags(&options, str);
	parsing_wdt_prc(&(options.wdt), str);
	if (**str == '.')
	{
		options.dot = 1;
		(*str)++;
		parsing_wdt_prc(&(options.prc), str);
	}
	if (ft_strchr("cspdiuxX%", **str) != 0)
	{
		count = print_conversions(options, ap, str);
	}
	return (count);
}

static void	parsing_flags(t_data *options, char **str)
{
	while (ft_strchr("-#0 +", **str) != 0)
	{
		if (**str == '-')
			options->dash = 1;
		else if (**str == '#')
			options->hash = 1;
		else if (**str == '0')
			options->zero = 1;
		else if (**str == ' ')
			options->space = 1;
		else if (**str == '+')
			options->plus = 1;
		(*str)++;
	}
}

static void	parsing_wdt_prc(int *num, char **str)
{
	while (**str >= '0' && **str <= '9')
	{
		*num = *num * 10 + (**str - '0');
		(*str)++;
	}
}
