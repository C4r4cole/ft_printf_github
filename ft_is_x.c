/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/15 18:51:51 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void ft_is_x(va_list args)
{
	char			*hexa;
	char			buffer[18];
	char			*res;
	unsigned long	nbr;
	int				i;

	i = 17;
	hexa = "0123456789abcdef";
	res = va_arg(args, char *);
	nbr = (unsigned long)res;
	buffer[17] = '\n';
	while (i > 1)
	{
		buffer[i] = hexa[nbr % 16];
		nbr = nbr / 16;
		i--;
	}
	write(1, buffer, 18);
}
