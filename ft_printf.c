/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:04:49 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 12:57:56 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_formats(va_list args, char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = ft_printchar(va_arg(args, int));
	else if (format == 's')
		length = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		length = ft_printptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		length = ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		length = ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		length = ft_printhexs(va_arg(args, unsigned int));
	else if (format == 'X' )
		length = ft_printhexb(va_arg(args, unsigned int));
	else if (format == '%')
		length = ft_printpercent();
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		temp;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			temp = ft_formats(args, *(str + 1));
			if (temp == -1)
				return (-1);
			count += temp;
			str++;
		}
		else if (ft_printchar(*str) == -1)
			return (-1);
		else
			count++;
		str++;
	}
	va_end(args);
	return (count);
}
