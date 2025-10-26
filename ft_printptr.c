/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:56:47 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 10:56:06 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_ptr(unsigned long n)
{
	int		length;
	char	c;
	int		i;

	length = 0;
	if (n >= 16)
		length += ft_put_ptr(n / 16);
	c = "0123456789abcdef"[n % 16];
	i = write(1, &c, 1);
	if (i == -1)
		return (-1);
	length += i;
	return (length);
}

int	ft_printptr(unsigned long ptr)
{
	int	length;
	int	i;
	int	temp;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	else
	{
		length = 2;
		i = write(1, "0x", 2);
		if (i == -1)
			return (-1);
		temp = ft_put_ptr(ptr);
		if (temp == -1)
			return (-1);
		length += temp;
	}
	return (length);
}
