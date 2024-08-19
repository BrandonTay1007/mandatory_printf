/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:16:33 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:10:04 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)src;
	while (len-- > 0)
	{
		if ((unsigned char)*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (0);
}
