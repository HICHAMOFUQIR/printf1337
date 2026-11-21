/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houfqir <houfqir@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:41:38 by houfqir           #+#    #+#             */
/*   Updated: 2026/11/19 16:17:43 by houfqir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define PRINTF_ERROR -1
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define VALID_FORMATS "cspdiuxX%"

int	ft_printf(const char *format, ...);

int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_int(long long n);
int	ft_print_hex(unsigned int n, char c);
int	ft_print_ptr(void *ptr);

#endif