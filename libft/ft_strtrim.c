/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:32 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/12 09:41:59 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (ft_strdup(""));
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	if (start > end)
		return (ft_strdup(""));
	while (s1[end] && is_set(s1[end], set) && start < end)
		end--;
	s = malloc(end - start + 2);
	if (!s)
		return (NULL);
	ft_strlcpy(s, (char *)s1 + start, end - start + 2);
	return (s);
}

/* int main(int argc, char const *argv[])
{
	char *s1 = "AAAAAA";
	char *s2 = "\n\n\n\t\t\tHello \t  Please\n Trim me !   AA\t\t";
	char *a = ft_strtrim(s1, "A\t\n");
	puts(a);
} */
