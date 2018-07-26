/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_even.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:48:13 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/09 16:49:12 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes a valid integer and returns 1 if the number is even otherwise 0.
*/

int		ft_even(int num)
{
	if ((num <= 2147483647) && (num > -2147483648))
	{
		if (num % 2 == 0)
			return (1);
	}
	return (0);
}
