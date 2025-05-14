/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:01:17 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/14 16:02:58 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "libftprintf.h"

void	ft_is_s(va_list args)
{
	int	j;
	
	char *res = va_arg(args, char *);
	j = 0;
	while (res[j])
	{
		write(1, &res[j], 1);
		j++;
	}
}