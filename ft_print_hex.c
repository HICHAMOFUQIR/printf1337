/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:42:36 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/19 16:16:52 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, char c)
{
	char	arr[sizeof(unsigned int) * 2 + 1];
	int		index;

	index = sizeof(arr);
	arr[--index] = '\0';
	if (num == 0)
		return (ft_print_char('0'));
	while (0 < num)
	{
		if (c == 'x')
			arr[--index] = HEX_LOWER[num % 16];
		else
			arr[--index] = HEX_UPPER[num % 16];
		num /= 16;
	}
	return (ft_print_str(&arr[index]));
}
