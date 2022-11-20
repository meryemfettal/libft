/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:00:04 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/08 18:38:17 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
// int main()
// {
// 	int x = 3;
// 	t_list *new = ft_lstnew(&x);
// 	printf("%d | %p | %p | %p", *((int *)new->content),
// (int *)new->content, &x, ((int *)new->next));
// }
