/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:07:23 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/19 14:35:58 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cd;
	unsigned char	*cs;

	cs = (unsigned char *)src;
	cd = (unsigned char *)dst;
	if (cs > cd)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len--)
			cd[len] = cs[len];
	}
	return (cd);
}

// int main()
// {
// 	char d[] = "geeksfor";
// 	char s[] = "geeksforgeeks";
// 	ft_memmove(d, s, 5);
// 	printf("%s\n", d);
// 	char d1[] = "geeksfor";
// 	char s1[] = "geeksforgeeks";
// 	memmove(d1, s1, 5);
// 	printf("%s", d1);
// }
