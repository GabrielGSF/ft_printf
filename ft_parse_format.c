/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:32:43 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 11:35:04 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c);
int	ft_putstr(char *str);
// int	ft_putnbr(int nbr);

int	ft_parse_format(char f, va_list values)
{
	if (f == 'c')
		return (ft_putchar(va_arg(values, int)));
	if (f == 's')
		return (ft_putstr(va_arg(values, char *)));
	// if (f == 'p')
	// 	return (ft_putptr(va_arg(values, void *)));
	if (f == 'd')
		return (ft_putnbr('d', va_arg(values, int)));
	if (f == 'i')
		return (ft_putnbr('i', va_arg(values, int)));
	if (f == 'u')
		return (ft_putnbr('u', va_arg(values, unsigned int)));
	if (f == 'x')
		return (ft_puthex('x', va_arg(values, unsigned int)));
	if (f == 'X')
		return (ft_puthex('X', va_arg(values, unsigned int)));
	if (f == '%')
		return (ft_putchar('%'));
	return (0);
}
