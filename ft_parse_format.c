/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:32:43 by gdos-san          #+#    #+#             */
/*   Updated: 2026/07/15 18:25:46 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format(void *f, va_list values)
{
	if (f == 'c')
		return ft_putchar(va_arg(values, char));
	if (f == 's')
		return ft_putstr(va_arg(values, char *));
	if (f == 'p')
		return ft_putptr(va_arg(values, void *));
	if (f == 'd')
		return ft_putnbr(va_arg(values, int));
	if (f == 'i')
		return ft_putnbr(va_arg(values, int));
	if (f == 'u')
		return ft_putunsnbr(va_arg(values, unsigned int));
	if (f == 'x')
		return ft_putlowhex(va_arg(values, unsigned int));
	if (f == 'X')
		return ft_putuphex(va_arg(values, unsigned int));
	if (f == '%')
		return ft_putchar('%');
}
