/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:23:02 by gdos-san          #+#    #+#             */
/*   Updated: 2026/07/17 20:05:26 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_parse_format(char f, va_list values);

int	ft_printf(const char *fstr, ...)
{
	va_list	values;
	size_t	i;
	int		count;

	va_start(values, fstr);
	i = 0;
	count = 0;
	while (fstr[i])
	{
		if (fstr[i] == '%')
			count += ft_parse_format(fstr[++i], values);
		else
			count += ft_putchar(fstr[i]);
		i++;
	}
	va_end(values);
	return (i);
}

int	main(void)
{
	ft_printf("oi%soii", "- cavalo -");
	return (0);
}
