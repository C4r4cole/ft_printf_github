/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:01:17 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/17 12:35:01 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_is_s(va_list args)
{
	int		i;
	char	*res;

	res = va_arg(args, char *);
	i = 0;
	if (!res)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}
