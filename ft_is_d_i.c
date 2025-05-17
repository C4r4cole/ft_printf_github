/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/16 18:22:04 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_is_d_i(va_list args)
{
	int		i;
	char	*itoa_result;
	int		res;
	int		len;

	res = va_arg(args, int);
	i = 0;
	itoa_result = ft_itoa(res);
	while (itoa_result[i])
	{
		write(1, &itoa_result[i], 1);
		i++;
	}
	len = ft_strlen(itoa_result);
	free(itoa_result);
	return (len);
}
