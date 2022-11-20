/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:31:45 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/20 15:45:22 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	tmp;

	i = 0;
	ptr = (unsigned char *)s;
	tmp = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == tmp)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
