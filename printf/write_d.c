/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:45:57 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/10 12:46:25 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_d(va_list *ap)
{
	long	nb;
	int		n;
	int		len;

	n = va_arg(*ap, int);
	nb = n;
	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		len++;
		nb = -nb;
	}
	len += putnbr_base10(nb);
	return (len);
}
