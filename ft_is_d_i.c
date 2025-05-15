/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/15 16:40:45 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_is_d_i(va_list args)
{
	int		i;
	char	*itoa_result;
	int		res;

	res = va_arg(args, int);
	i = 0;
	itoa_result = ft_itoa(res);
	while (itoa_result[i])
	{
		write(1, &itoa_result[i], 1);
		i++;
	}
}
