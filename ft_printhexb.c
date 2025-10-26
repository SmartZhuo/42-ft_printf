/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:00:22 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 10:52:57 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexb(unsigned int n)
{
	int		count;
	char	*base;
	int		temp;

	count = 0;
	base = "0123456789ABCDEF";
	if (n < 16)
	{
		temp = ft_printchar(base[n]);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	else
	{
		temp = ft_printhexb(n / 16);
		if (temp == -1)
			return (-1);
		count += temp;
		temp = ft_printhexb(n % 16);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	return (count);
}
