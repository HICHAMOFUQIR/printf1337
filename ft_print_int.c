/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:42:43 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/19 12:03:49 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(long long n)
{
	int		sign;
	int		index;
	char	arr[12];

	sign = 1;
	index = sizeof(arr);
	arr[--index] = '\0';
	if (n == 0)
		arr[--index] = '0';
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 0)
	{
		arr[--index] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		arr[--index] = '-';
	return (ft_print_str(&arr[index]));
}
