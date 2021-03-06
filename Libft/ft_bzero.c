/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:01:37 by iderighe          #+#    #+#             */
/*   Updated: 2021/01/06 16:56:31 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*str;

	str = (char *)s;
	if (n <= 0)
		return ;
	i = 0;
	while (i <= n - 1)
	{
		str[i] = 0;
		i++;
	}
}
