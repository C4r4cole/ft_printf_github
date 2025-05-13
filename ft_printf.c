/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:46:14 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/13 21:18:46 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	ap;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				i++;
			}
			else if(format[i + 1] == 'd')
			{
				int res = va_arg(ap, int);
				ft_itoa(res);
				i++;
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (0);
}

int	main(void)
{
	return (0);
}
