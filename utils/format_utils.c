/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:12:31 by wei-yo-           #+#    #+#             */
/*   Updated: 2024/07/30 08:58:19 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	speci_parser(char d_type, va_list args)
{
	int		word_c;

	if (d_type == 'c')
		word_c = ft_putchar(va_arg(args, int));
	else if (d_type == 's')
		word_c = ft_putstr(va_arg(args, char *));
	else if (d_type == 'd' || d_type == 'i')
		word_c = ft_putint(va_arg(args, int));
	else if (d_type == 'u')
		word_c = ft_put_uint(va_arg(args, unsigned int));
	else if (d_type == 'x' || d_type == 'X')
		word_c = ft_hexa_uint(va_arg(args, unsigned int), d_type);
	else if (d_type == 'p')
		word_c = ft_put_ptr(va_arg(args, void *));
	else if (d_type == '%')
		word_c = ft_putchar('%');
	else
		return (-1);
	return (word_c);
}
