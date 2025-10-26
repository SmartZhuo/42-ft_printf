/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:47:51 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 11:03:20 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;
	int	temp;

	i = 0;
	if (str == NULL)
	{
		temp = write(1, "(null)", 6);
		if (temp == -1)
			return (-1);
		return (6);
	}
	while (str[i] != '\0')
	{
		temp = write(1, &str[i], 1);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (i);
}
