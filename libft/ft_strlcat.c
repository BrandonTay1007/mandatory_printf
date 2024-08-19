/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:59:47 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:05:11 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	if (i < size)
	{
		while (i + 1 < size && *src && size)
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = '\0';
	}
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
