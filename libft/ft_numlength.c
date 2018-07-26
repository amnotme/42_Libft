/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 22:15:49 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/09 16:23:45 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes a number and reads the length of the number passed with the base given.
**
** Returns l as the length of the number.
*/

size_t		ft_numlength(int num, int base)
{
	size_t	l;

	l = 0;
	if (num == 0)
		return (1);
	if (num < 0 && base == 10)
		l++;
	while (num)
	{
		num = num / base;
		l++;
	}
	return (l);
}
