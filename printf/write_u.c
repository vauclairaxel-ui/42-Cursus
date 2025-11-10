/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:48:15 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/10 12:48:37 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_u(va_list *ap)
{
	unsigned int	n;
	unsigned long	nb;
	int				len;

	n = va_arg(*ap, unsigned int);
	nb = n;
	len = 0;
	len += putnbr_u_base10(nb);
	return (len);
}
