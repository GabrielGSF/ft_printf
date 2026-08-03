/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 08:38:41 by device935         #+#    #+#             */
/*   Updated: 2026/07/21 10:04:46 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count_digits(long n)
{
	int	count;

	count = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	ft_is_negative(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

static void	ft_put_digit(char *s, long num, int len)
{
	while (num >= 10)
	{
		s[--len] = (char)('0' + (num % 10));
		num /= 10;
	}
	s[--len] = (char)('0' + num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	num;

	num = n;
	sign = ft_is_negative(num);
	len = ft_count_digits(num) + sign;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (sign)
	{
		str[0] = '-';
		num = -num;
	}
	ft_put_digit(str, num, len);
	return (str);
}
