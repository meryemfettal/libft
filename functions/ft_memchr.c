/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:31:45 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/27 10:50:11 by mfettal          ###   ########.fr       */
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
// int main()
// {
// 	char s[] = "geeksforgeeks";
// 	// int p[] = {5623, 64, 98, 5, 69};
// 	// printf("%s\n", memchr(p, 64, 4 * sizeof(int)));
// 	// printf("%s", ft_memchr(p, 64, 4 * sizeof(int)));
// 	printf("%s\n",ft_memchr(s, 'k', 10));
// 	printf("%s",memchr(s, 'k', 10));
// 	return (0);
// }
