/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: device935 <device935@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:06:14 by device935         #+#    #+#             */
/*   Updated: 2026/08/04 11:29:17 by device935        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count_digits(unsigned long long n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_put_digit(char *s, unsigned long long n, int len)
{
	while (n >= 10)
	{
		s[--len] = (char)('0' + (n % 10));
		n /= 10;
	}
	s[--len] = (char)('0' + n);
}

char	*ft_utoa(unsigned long long n)
{
	char	*str;
	int		len;

	len = ft_count_digits(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_put_digit(str, n, len);
	return (str);
}