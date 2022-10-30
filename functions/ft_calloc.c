/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:12 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/26 12:38:21 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, ft_strlen(ptr));
	return (ptr);
}
// int main()
// {
// 	printf("%p\n", ft_calloc(2,2));
// 	printf("%p", calloc(2,2));
// }
