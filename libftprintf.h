/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:12:46 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/13 20:05:24 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);

#endif
