/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:45:19 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/10 12:46:59 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_p(va_list *ap)
{
	unsigned long	ptr;
	int				len;

	ptr = (unsigned long)va_arg(*ap, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	len = put_hex(ptr);
	return (len + 2);
}
