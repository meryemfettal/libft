/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:29:35 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/21 21:08:37 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	*cd;

	i = 0;
	if (!dest && !src)
		return (NULL);
	cs = (unsigned char *)src;
	cd = (unsigned char *)dest;
	while (i < n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (cd);
}
// int main()
// {
// 	char c[] = "geeksforgeeks";
// 	char d[] = "1337";
// 	ft_memcpy(d ,c + 3, 6);
// 	printf("%s",d);
// 	return (0);
// }
