/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:21:15 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 18:53:43 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	hex(unsigned long long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += hex(nbr / 16, base);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}

int	ft_puthex(char f, unsigned long long nbr)
{
	int		count;

	count = 0;
	if (f == 'x')
		count += hex(nbr, "0123456789abcdef");
	if (f == 'X')
		count += hex(nbr, "0123456789ABCDEF");
	if (f == 'p')
	{
		if (nbr == 0)
			return (write(1, "(nil)", 5));
		else
		{			
			count += write(1, "0x", 2);
			count += hex(nbr, "0123456789abcdef");
		}
	}
	return (count);
}
