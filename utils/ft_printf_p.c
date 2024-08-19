/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:57:31 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/08/19 19:40:44 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexa_ulong(unsigned long nb, char format)
{
	int	w_c;

	w_c = 0;
	ft_put_hexa(nb, format, &w_c);
	return (w_c);
}

int	ft_put_ptr(void *ptr)
{
	unsigned long	address;
	int				w_c;

	w_c = 0;
	if (ptr == NULL)
		return (ft_putstr("0x0"));
	address = (unsigned long) ptr;
	w_c += ft_putstr("0x");
	w_c += ft_hexa_ulong(address, 'x');
	return (w_c);
}
