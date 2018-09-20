/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:44:25 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/07 09:51:41 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int i)
{
	char c;

	if (i == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		c = i % 10 + 48;
		write(1, &c, 1);
	}
	if (i < 10)
	{
		c = i + 48;
		write(1, &c, 1);
	}
}
