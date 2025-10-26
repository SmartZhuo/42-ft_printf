/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:57:40 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 10:59:46 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	count;
	int	temp;

	count = 0;
	if (n < 10)
	{
		temp = ft_printchar(n + '0');
		if (temp == -1)
			return (-1);
		count += temp;
	}
	else
	{
		temp = ft_printunsigned(n / 10);
		if (temp == -1)
			return (-1);
		count += temp;
		temp = ft_printunsigned(n % 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	return (count);
}
