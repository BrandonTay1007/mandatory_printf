/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:40:04 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/11 16:10:55 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst)
	{
		t = ft_lstlast(*lst);
		t->next = new;
	}
	else
		*lst = new;
}
/* int main(int argc, char const *argv[])
{
	t_list **n;
	t_list n1;
	t_list n2;
	t_list n3;
	t_list n4;
	t_list *lastn;

	(*n) = &n1;
	n1.content = " ";
	n1.next = &n2;
	n2.content = " ";
	n2.next = &n3;
	n3.content = " ";
	n3.next = NULL;
	n4.content = "I'm last";
	n4.next = NULL;
	ft_lstadd_back(n, &n4);
	puts(n[3]->content);
} */