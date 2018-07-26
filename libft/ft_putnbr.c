/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 23:18:29 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/09 16:27:55 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer n to the standard output.
*/

void		ft_putnbr(int n)
{
	if ((n > 2147483647) || (n < -2147483648))
		return ;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if ((n >= -2147483648) && (n <= 2147483647))
	{
		if (n < 10)
		{
			ft_putchar(n + '0');
			return ;
		}
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}
