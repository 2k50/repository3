/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:06:14 by cd-haute          #+#    #+#             */
/*   Updated: 2022/12/08 19:15:05 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	handle_null(char **str, int *status);
static void	printing_print_s(char *str, int strlen, t_data options, int *count);

int	print_s(char *str, t_data options)
{
	int	count;
	int	strlen;
	int	status;

	count = 0;
	if (!handle_null(&str, &status))
		return (-1);
	strlen = (int) ft_strlen(str);
	if (options.dot == 1 && options.prc < strlen)
		strlen = options.prc;
	printing_print_s(str, strlen, options, &count);
	if (status)
		free (str);
	return (count);
}

static int	handle_null(char **str, int *status)
{
	*status = 0;
	if (*str == NULL)
	{
		*str = ft_strdup("(null)");
		if (*str == NULL)
			return (0);
		*status = 1;
	}
	return (1);
}

static void	printing_print_s(char *str, int strlen, t_data options, int *count)
{
	int	padding;

	padding = options.wdt - strlen;
	if (options.dash == 1)
	{
		*count += ft_putnstr(str, strlen);
		*count += ft_putnchar(' ', padding);
	}
	else
	{
		if (options.zero == 0)
			*count += ft_putnchar(' ', padding);
		else if (options.zero == 1)
			*count += ft_putnchar('0', padding);
		*count += ft_putnstr(str, strlen);
	}
}
