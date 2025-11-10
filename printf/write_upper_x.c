/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_upper_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:49:31 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/10 12:49:50 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_upper_x(va_list *ap)
{
	unsigned int	n;
	unsigned long	nb;

	n = va_arg(*ap, unsigned int);
	nb = n;
	return (put_hex_upper(nb));
}
