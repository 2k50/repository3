/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:06:11 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/12 15:41:58 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_printstr(char *str)
{
	int		i;
	char	*null;

	null = "(null)";
	i = 0;
	if (str == NULL)
	{
		while (*null)
			write(1, null++, 1);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_num_len(unsigned int j)
{
	int	i;

	i = 0;
	while (j != 0)
	{
		i++;
		j /= 10;
	}
	return (i);
}

char	*ft_itoa(unsigned int n)
{
	char	*j;
	int		i;

	i = ft_num_len(n);
	j = malloc(sizeof(char) * (i + 1));
	j[i] = '\0';
	while (n != 0)
	{
		j[i - 1] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (j);
}

int	ft_print_unsigned(unsigned int n)
{
	int		print_lengh;
	char	*j;

	print_lengh = 0;
	if (n == 0)
		print_lengh += write(1, "0", 1);
	else
	{
		j = ft_itoa(n);
		print_lengh += ft_printstr(j);
		free(j);
	}
	return (print_lengh);
}
