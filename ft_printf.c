/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:46:14 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/16 19:31:23 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	data_type(const char *format, va_list args)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				count = count + ft_is_c(args);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				count = count + ft_is_s(args);
				i++;
			}
			else if (format[i + 1] == 'p')
			{
				count = count + ft_is_p(args);
				i++;
			}
			else if (format[i + 1] == 'd')
			{
				count = count + ft_is_d_i(args);
				i++;
			}
			else if (format[i + 1] == 'i')
			{
				count = count + ft_is_d_i(args);
				i++;
			}
			else if (format[i + 1] == 'u')
			{
				count = count + ft_is_u(args);
				i++;
			}
			else if (format[i + 1] == 'x')
			{
				count = count + ft_is_lowerx(args);
				i++;
			}
			else if (format[i + 1] == 'X')
			{
				count = count + ft_is_upperx(args);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				count++;
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
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	result;
	
	va_start(args, format);
	result = data_type(format, args);
	va_end(args);
	return (result);
}
