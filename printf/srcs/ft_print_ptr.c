/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:54:07 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/12 14:34:10 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_ptr_len(unsigned long long num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num /= 16;
	}
	return (i);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_lengh;

	print_lengh = 0;
	print_lengh += write(1, "0x", 2);
	if (ptr == 0)
		print_lengh += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		print_lengh += ft_ptr_len(ptr);
	}
	return (print_lengh);
}
