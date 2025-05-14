/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:46:14 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/14 16:09:54 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "libftprintf.h"

void	data_type(const char *format, va_list args)
{
	int		i;
	
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if(format[i + 1] == 'c')
			{
				ft_is_c(args);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				ft_is_s(args);
				i++;
			}
			else if(format[i + 1] == 'd')
			{
				ft_is_d(args);
				i++;
			}
			else if (format[i + 1] == '%')
			{  
				ft_putchar_fd('%', 1);
				i++;
			}
			else
			{
				write(1, "[error]", 8);
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
		}
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	data_type(format, args);
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("c : %c, s : %s, p : %p, d : %d, i : %i, u : %u, x : %x, X : %X, Symbol_percent : %%\n", 'C', "C4r4cole", 6);
	return (0);
}
