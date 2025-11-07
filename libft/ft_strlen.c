/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avauclai <avauclai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:10:03 by avauclai          #+#    #+#             */
/*   Updated: 2025/11/04 16:07:56 by avauclai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%zu\n", ft_strlen("Bonjour"));
    return (0);
}
*/
