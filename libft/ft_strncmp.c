/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:15:16 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/10 16:42:45 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!s1[i] && !s2[i])
			return (0);
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/* int main()
{
	char *a = "Bred\0\0\0\0";
	char *b = "Bred\0abc";

	int i = ft_strncmp(a,b,10);
	int e = strncmp(a,b,10);
	printf("mine func : %i \n", i);
	printf("ori : %i", e);
} */