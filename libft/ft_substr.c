/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:13:46 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/12 16:37:25 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!str || ft_strlen(str) <= start)
		return (ft_strdup(""));
	if (ft_strlen(str) >= len)
		substr = malloc (len + 1);
	else
		substr = malloc (ft_strlen(str));
	if (!substr)
		return (NULL);
	while (i < len && str[start])
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	if (substr && str)
		substr[i] = '\0';
	return (substr);
}
/* 
int main(int argc, char const *argv[])
{	
	char *str = "1";
	unsigned int start = 10;
	size_t len = 1;
	
	char *a = ft_substr("tripouille", 100, 1);
	printf("%s",a);
	printf("%i", strcmp(a,""));
	free(a);
} */
