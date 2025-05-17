/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_upperx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/16 18:41:30 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_is_upperx(va_list args)
{
	char			*hexa;
	char			buffer[17];
	unsigned long	nbr;
	int				i;

	hexa = "0123456789ABCDEF";
	nbr = va_arg(args, unsigned int);
	buffer[16] = '\0';
	i = 16;
	if (nbr == 0)
	{
		buffer[15] = '0';
		i = 15;
	}
	else
	{
		while (nbr > 0)
		{
			buffer[i - 1] = hexa[nbr % 16];
			nbr = nbr / 16;
			i--;
		}
	}
	write(1, &buffer[i], 16 - i);
	return (16 - i);
}
