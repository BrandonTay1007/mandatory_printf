/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:52:52 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:03:26 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if ((unsigned char)*src == (unsigned char)c)
			return ((char *)src);
		src++;
	}
	if (!(unsigned char)c)
		return ((char *)src);
	return (NULL);
}

/* int main()
{
	const char *src = "Hello wo\0rsaddald";
	const char *src2 = src;
	char *r = ft_strchr(src, 'r');
	char *or = strchr(src2, 'r');
	
		puts(r);
		puts(or);
} */
