/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:03:19 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:01:35 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	s = src;
	d = dest;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

/* int main(int argc, char const *argv[])
{
	char *a = "dadsa";
	memcpy(NULL, a, 3);
} */