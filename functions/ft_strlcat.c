/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:42:06 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/20 16:22:01 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	result;
	size_t	sl;
	size_t	dl;

	sl = (int)ft_strlen(src);
	dl = (int)ft_strlen(dst);
	i = 0;
	if(dl < dstsize)
		result = sl + dl;
	else
		result = sl + dstsize;
	if (!dstsize)
	return (result);
	if (dstsize)
	{
		while (src[i] && dl + i < dstsize - 1)
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] =  '\0';
	}
	return (result);
}
// int main()
// {
// 	char s[] = "geeksforgeeks";
// 	char d[40] = "hello world";
// 	printf("%zu", ft_strlcat(d, s, 40));
// 	return (0);
// }