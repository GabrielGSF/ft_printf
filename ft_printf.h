/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:19:28 by gdos-san          #+#    #+#             */
/*   Updated: 2026/07/15 18:18:38 by gdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_parse_format(void *f, va_list values);
int		ft_putchar(char	c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int		ft_putnbr(int nbr);
int		ft_putunsnbr(unsigned int nbr);
int		ft_putlowhex(unsigned int nbr);
int		ft_putuphex(unsigned int nbr);

#endif