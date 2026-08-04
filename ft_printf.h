/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:19:28 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 18:46:47 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fstr, ...);
int		ft_parse_format(char f, va_list values);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(char f, long n);
int		ft_puthex(char f, unsigned long long nbr);

#endif