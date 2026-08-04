/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:16:21 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 18:54:47 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(char f, long n)
{
	int	count;

	count = 0;
	if (f == 'i' || f == 'd')
	{
		if (n < 0)
		{
			count += ft_putchar('-');
			n *= -1;
		}
		if (n > 9)
			count += ft_putnbr(f, n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	if (f == 'u')
	{
		if (n > 9)
			count += ft_putnbr(f, n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
