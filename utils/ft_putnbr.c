/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:16:21 by gdos-san          #+#    #+#             */
/*   Updated: 2026/08/04 11:22:30 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(char f, int nbr)
{
	int	count;

	if (f == 'i' || 'd')
		count = ft_putstr(ft_itoa(nbr));
	if (f == 'u')
		count = ft_putstr(ft_utoa(nbr));
	return (count);
}
