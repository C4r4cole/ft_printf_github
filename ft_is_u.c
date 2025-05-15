/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/15 17:43:53 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void ft_putnbr_u(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr_u(nbr / 10);
	}
	ft_putchar_fd(nbr % 10 + '0', 1);
}

void ft_is_u(va_list args)
{
    unsigned int nbr;
	
	nbr = va_arg(args, unsigned int);
    ft_putnbr_u(nbr);
}


