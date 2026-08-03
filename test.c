/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 09:00:15 by device935         #+#    #+#             */
/*   Updated: 2026/07/21 10:10:10 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("Maior valor de um int (positivo): %d\n", 2147483647);
    printf("Menor valor de um int (negativo): %d\n", -2147483649);
	return (0);
}
