/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:54:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/05/29 21:54:17 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_size(int n)
{
	unsigned int	size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	size;
	unsigned int	nb;

	if (n == 0)
		return (ft_strdup("0"));
	size = get_size(n);
	s = malloc(size + 1);
	if (!s)
		return (NULL);
	s[size] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	while (nb != 0)
	{
		size--;
		s[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

/* int main(int argc, char const *argv[])
{
	puts(ft_itoa(2931221));
	puts(ft_itoa(INT_MAX));
	puts(ft_itoa(INT_MIN));
	puts(ft_itoa(0));
	puts(ft_itoa(-2190320));
	puts(ft_itoa(1));
}  */
