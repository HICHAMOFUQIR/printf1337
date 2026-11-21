/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:42:57 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/18 16:41:25 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	total;

	total = 0;
	if (str == NULL)
		return (ft_print_str("(null)"));
	while (str[total])
		total++;
	if (write(1, str, total) == total)
		return (total);
	return (PRINTF_ERROR);
}
