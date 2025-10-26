/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:04:36 by zhuwu             #+#    #+#             */
/*   Updated: 2025/10/26 11:02:18 by zhuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printhexb(unsigned int n);
int		ft_printhexs(unsigned int n);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printptr(unsigned long ptr);
int		ft_printstr(char *str);
int		ft_printunsigned(unsigned int n);
char	*ft_itoa(int n);
#endif