/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:19:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:00:23 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 1;
	if (lst == NULL)
		return (0);
	while ((lst->next) != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* int main(int argc, char const *argv[])
{
	t_list **lst;
	t_list n1;
	t_list n2;
	t_list n3;
	t_list n4;

	n1.content = " ";
	n1.next = &n2;
	n2.content = " ";
	n2.next = &n3;
	n3.content = " ";
	n3.next = &n4;
	n4.content = " ";
	n4.next = NULL;
	printf("%i", ft_lstsize(&n1));
} */
