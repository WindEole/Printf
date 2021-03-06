/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <iderighe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:32:40 by iderighe          #+#    #+#             */
/*   Updated: 2021/03/06 14:22:34 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_dstlen_ui(unsigned int n)
{
	int				dlen;
	unsigned int	nb;

	dlen = 0;
	if (n == 0)
		dlen = 1;
	if (n < 0)
		nb = 4294967295 - (n - 1);
	else
		nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		dlen++;
	}
	return (dlen);
}

char	ft_abs_ui(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa_ui(unsigned int n)
{
	int		dlen;
	char	*dst;

	dlen = ft_dstlen_ui(n);
	dst = (char *)malloc(sizeof(char) * (dlen + 1));
	if (dst == NULL)
		return (NULL);
	dst[dlen] = '\0';
	dlen--;
	while (dlen >= 0)
	{
		dst[dlen] = '0' + ft_abs_ui(n % 10);
		n = n / 10;
		dlen--;
	}
	return (dst);
}
