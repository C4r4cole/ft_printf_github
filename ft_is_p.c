/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:20:45 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/15 16:40:50 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_is_p(va_list args)
{
	int				i;
	char			*res;
	char			buffer[18];
	char			*hexa;
	unsigned long	address;

	hexa = "0123456789abcdef";
	res = va_arg(args, char *);
	address = (unsigned long)res;
	i = 17;
	buffer[17] = '\n';
	while (i > 1)
	{
		buffer[i] = hexa[address % 16];
		address = address / 16;
		i--;
	}
	buffer[0] = '0';
	buffer[1] = '1';
	write(1, buffer, 18);
}
