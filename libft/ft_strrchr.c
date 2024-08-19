/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:50:53 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/03 18:13:42 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*ptr;

	ptr = (char *)src;
	while (*src != '\0')
		src++;
	while (src >= ptr)
	{
		if ((unsigned char)*src == (unsigned char)c)
			return ((char *)src);
		src--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)src);
	return (0);
}

/* int main(int argc, char const *argv[])
{
   	const char *src = "Hello \x0F oroddald";
	const char *src2 = src;
	char c = '\x0F';
	char *r = ft_strrchr(src, c);
	char *or = strrchr(src2, c);
	
	puts(r);
	puts(or);
} */
