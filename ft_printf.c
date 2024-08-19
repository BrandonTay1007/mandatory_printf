/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:44:56 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/07/30 13:12:52 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		temp;
	int		word_c;

	i = 0;
	word_c = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			temp = speci_parser(str[i + 1], args);
			if (temp >= 0)
				word_c += temp;
			else
				word_c += ft_putchar(str[i]);
			i++;
		}
		else
			word_c += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (word_c);
}
/* int main(int argc, char const *argv[])
{
	int a = ft_printf("%p", 0);
	int b = printf("%p", 0);

	printf("\n%i, %i", a, b);
	return 0;
} */
/* int main()
{
	char			c = 'H';
	char			*str = "Im not gay";
	int				nb = 1230921;
	unsigned int	u_int = 1234;
	char			*ptr = "testing";
	int				a;
	a = printf("%cello World, %s, %i, %d, %x, %X, %u, %p, %% avc %r", 
			c, 
			str, 
			nb, 
			nb, 
			nb, 
			nb, 
			u_int, 
			ptr);
	printf("%i", a);
	printf("\n----------------------------------------------------\n");
	a = ft_printf("%cello World, %s, %i, %d, %x, %X, %u, %p, %% avc %r", 
			c, 
			str, 
			nb, 
			nb, 
			nb, 
			nb, 
			u_int, 
			ptr);
	printf("%i", a);

	return 0;
} */