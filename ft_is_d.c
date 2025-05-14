/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:05:51 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/14 16:08:23 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "libftprintf.h"

void	ft_is_d(va_list args)
{
	int		j;
	char	*itoa_result;
	
	j = 0;
	int res = va_arg(args, int);
	itoa_result = ft_itoa(res);
	while(itoa_result[j])
	{
		write(1, &itoa_result[j], 1);
		j++;
	}
}