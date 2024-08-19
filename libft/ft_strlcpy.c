/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:55:46 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:05:22 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i + 1 < size && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*  int main(void)
{
	char a[] = "HEllo world";
	char b[50] = "";
 	char f[80] = "";
	int	size = 0;

	int c = ft_strlcpy(b,a,size);
	int d = strlcpy(f,a,size);
	printf("Own %s %i \n",b,c);
	printf("Ori %s %i \n",f,d);
} */