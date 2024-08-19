/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:44:59 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/07/25 12:58:33 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

void	ft_putnbr_helper(long nb, int *count);
int		ft_put_uint(unsigned int nb);
int		ft_put_ptr(void *ptr);
void	ft_put_hexa(unsigned long nb, char format, int *count);
int		ft_hexa_uint(unsigned int nb, char format);
int		ft_hexa_ulong(unsigned long nb, char format);
int		ft_putint(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);

#endif