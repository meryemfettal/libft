/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:00:18 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/14 18:41:37 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		cpt;

	if (!lst)
		return (0);
	cpt = 0;
	tmp = lst;
	while (tmp)
	{
		cpt++;
		tmp = tmp->next;
	}
	return (cpt);
}
// int main()
// {
// 	t_list	*head;

// 	head = NULL;
// 	ft_lstadd_front(&head, ft_lstnew("test1"));
// 	ft_lstadd_front(&head, ft_lstnew("test2"));
// 	ft_lstadd_front(&head, ft_lstnew("test3"));
// 	while (head)
// 	{
// 		printf("%s\n",head->content);
// 		head = head->next;
// 	}
// }
