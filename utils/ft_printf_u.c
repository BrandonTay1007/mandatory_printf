/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:57:33 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/07/25 13:00:17 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_helper(long nb, int *count)
{
	if (nb >= 10)
		ft_putnbr_helper(nb / 10, count);
	*count += ft_putchar((nb % 10) + '0');
}

int	ft_put_uint(unsigned int nb)
{
	long	nb_long;
	int		count;

	count = 0;
	nb_long = (long) nb;
	ft_putnbr_helper(nb_long, &count);
	return (count);
}
