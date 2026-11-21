/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:42:51 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/19 12:57:45 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long long	num;
	char				arr[2 * sizeof(void *) + 3];
	int					index;

	num = (unsigned long long)ptr;
	if (ptr == NULL)
		return (ft_print_str("(nil)"));
	index = sizeof(arr);
	arr[--index] = '\0';
	while (num > 0)
	{
		arr[--index] = HEX_LOWER[num % 16];
		num /= 16;
	}
	arr[--index] = 'x';
	arr[--index] = '0';
	return (ft_print_str(&arr[index]));
}
