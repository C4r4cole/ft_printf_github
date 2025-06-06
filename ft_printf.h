/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:12:46 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/16 18:39:17 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>

// int		main(void);
int	ft_printf(const char *format, ...);
int	ft_is_c(va_list args);
int	ft_is_s(va_list args);
int	ft_is_p(va_list args);
int	ft_is_d_i(va_list args);
int	ft_is_u(va_list args);
int	ft_is_lowerx(va_list args);
int	ft_is_upperx(va_list args);

#endif
