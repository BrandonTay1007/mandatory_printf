/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:34:19 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/05/27 22:58:47 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	j = -1;
	i = -1;
	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	while (s1[++i])
		s[++j] = s1[i];
	i = -1;
	while (s2[++i])
		s[++j] = s2[i];
	s[++j] = '\0';
	return (s);
}

/* int main(int argc, char const *argv[])
{
	const char *s1 = "Hello";
	const char *s2 = "world";
	char *s = ft_strjoin(s1, s2);
	puts(s);
	
	return 0;
} */
