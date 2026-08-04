/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:21:15 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/03 21:39:40 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(char f, unsigned int nbr)
{
	char	*base;
	int		count;

	if (f == 'X')
		base = "0123456789ABCDEF";
	else if (f == 'x')
		base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_puthex(f, nbr / 16);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}