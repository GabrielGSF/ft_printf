/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:19:28 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 11:28:19 by device935        ###   ########.fr       */
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
int		ft_putptr(void *ptr);
int		ft_putnbr(char f, int nbr);
int		ft_puthex(char f, unsigned int nbr);
char	*ft_itoa(long long n);
char	*ft_utoa(unsigned long long n);

#endif