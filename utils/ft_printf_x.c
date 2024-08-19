/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:57:03 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/07/25 13:00:06 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_hexa(unsigned long nb, char format, int *count)
{
	if (nb >= 16)
		ft_put_hexa(nb / 16, format, count);
	nb %= 16;
	if (nb <= 9)
		*count += ft_putchar(nb + '0');
	else
	{
		if (format == 'x')
			*count += ft_putchar(nb + 87);
		else if (format == 'X')
			*count += ft_putchar(nb + 55);
	}
}

int	ft_hexa_uint(unsigned int nb, char format)
{
	int	count;

	count = 0;
	ft_put_hexa((unsigned long) nb, format, &count);
	return (count);
}
