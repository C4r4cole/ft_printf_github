/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:03:09 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/15 17:50:19 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int main(void)
{
	char	*str;

	ft_printf("c : %c\n", 'C');
	ft_printf("s : %s\n", "Caracole");
	ft_printf("p : %p\n", &str);
	ft_printf("d : %d\n", 6);
	ft_printf("i : %i\n", 12);
	ft_printf("u : %u\n", -42);
	ft_printf("x : %x\n", 42);
	ft_printf("X : %X\n", 42);
	ft_printf("Symbole percent : %%\n");
	return (0);
}