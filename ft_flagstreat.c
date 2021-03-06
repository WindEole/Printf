/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagstreat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:09:00 by iderighe          #+#    #+#             */
/*   Updated: 2021/02/25 10:37:28 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_width(int width, int minus, int has_zero)
{
	int add;

	add = 0;
	while (width - minus > 0)
	{
		if (has_zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width -= 1;
		add++;
	}
	return (add);
}

int		ft_putstrprec(char *str, int prec)
{
	int	add;

	add = 0;
	while (str[add] && add < prec)
		ft_putchar(str[add++]);
	return (add);
}
