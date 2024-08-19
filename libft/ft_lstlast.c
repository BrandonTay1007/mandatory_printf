/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:33:58 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 15:59:36 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_n;

	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	last_n = lst;
	return (last_n);
}

/* int main(int argc, char const *argv[])
{
	t_list n1;
	t_list n2;
	t_list n3;
	t_list n4;
	t_list *lastn;

	n1.content = " ";
	n1.next = &n2;
	n2.content = " ";
	n2.next = &n3;
	n3.content = " ";
	n3.next = &n4;
	n4.content = "I'm last";
	n4.next = NULL;
	lastn = ft_lstlast(NULL);
	puts(lastn->content);
} */
