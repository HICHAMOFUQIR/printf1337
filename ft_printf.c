/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:42:16 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/19 12:02:10 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strchr(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static int	ft_handle(va_list list, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(list, int)));
	else if (c == 'c')
		return (ft_print_char(va_arg(list, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(list, char *)));
	else if (c == '%')
		return (ft_print_char('%'));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(list, void *)));
	else if (c == 'u')
		return (ft_print_int(va_arg(list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(list, unsigned int), c));
	return (PRINTF_ERROR);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		temp;
	int		counter;
	va_list	list;

	if (format == NULL)
		return (PRINTF_ERROR);
	va_start(list, format);
	i = 0;
	counter = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (va_end(list), PRINTF_ERROR);
		if (format[i] == '%' && ft_strchr(VALID_FORMATS, format[i + 1]))
			temp = ft_handle(list, format[++i]);
		else
			temp = ft_print_char(format[i]);
		if (temp == PRINTF_ERROR)
			return (va_end(list), PRINTF_ERROR);
		counter += temp;
		i++;
	}
	va_end(list);
	return (counter);
}
