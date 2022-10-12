/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:46:24 by cd-haute          #+#    #+#             */
/*   Updated: 2022/10/10 19:07:16 by cd-haute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))
	{
		return (c);
	}
	else
		return (0);
}
