/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:48:26 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/25 16:27:52 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_itoa_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_num_to_str(long n)
{
	long	nb;
	size_t	len;
	char	*str;
	size_t	i;

	len = ft_itoa_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	i = len;
	while (i-- > 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	return (ft_num_to_str(n));
}
