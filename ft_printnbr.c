/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:28:28 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 10:40:52 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(n);
	count = ft_printstr(str);
	free(str);
	if (count == -1)
		return (-1);
	return (count);
}
