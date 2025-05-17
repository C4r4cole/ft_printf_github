/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/16 19:21:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	int	count;
	
	count = 0;
	if (nbr > 9)
	{
		count = count + ft_putnbr_u(nbr / 10);
	}
	count++;
	ft_putchar_fd(nbr % 10 + '0', 1);
	return (count);
}

int	ft_is_u(va_list args)
{
	unsigned int	nbr;
	int				count;

	nbr = va_arg(args, unsigned int);
	count = ft_putnbr_u(nbr);
	return (count);
}
