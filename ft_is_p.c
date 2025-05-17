/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:20:45 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/17 12:39:30 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_is_p(va_list args)
{
	int				len;
	int				total_len;
	char			*buffer;
	char			*hexa;
	unsigned long	address;
	unsigned long	temp;

	hexa = "0123456789abcdef";
	address = (unsigned long)va_arg(args, void *);
	if(!address)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	temp = address;
	len = 1;
	while (temp / 16 != 0)
	{
		len++;
		temp = temp / 16;
	}
	total_len = len + 2;
	buffer = malloc(sizeof(char) * (total_len + 1));
	if (!buffer)
		return (0);
	buffer[total_len] = '\0';
	buffer[0] = '0';
	buffer[1] = 'x';
	while (len + 1 > 1)
	{
		buffer[len + 1] = hexa[address % 16];
		address = address / 16;
		len--;
	}
	write(1, buffer, total_len);
	free(buffer);
	return (total_len);
}

