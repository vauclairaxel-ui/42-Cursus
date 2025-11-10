/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:05:52 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/10 12:57:56 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "Libft/libft.h"

int	ft_printf(const char *format, ...);
int	type_args(char c, va_list *ap);
int	write_c(va_list *ap);
int	write_s(va_list *ap);
int	write_p(va_list *ap);
int	write_d(va_list *ap);
int	write_u(va_list *ap);
int	write_x(va_list *ap);
int	write_upper_x(va_list *ap);
int	write_percent(void);
int	put_hex(unsigned long n);
int	put_hex_upper(unsigned long n);
int	putnbr_base10(long nb);
int	putnbr_u_base10(unsigned long nb);

#endif
