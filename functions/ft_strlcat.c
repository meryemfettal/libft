/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:42:06 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/26 17:54:07 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	i = 0;
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	dl = ft_strlen(dst);
	if (dstsize < dl)
		return (dstsize + sl);
	if (dstsize && dstsize > dl)
	{
		dstsize = dstsize - dl - 1;
		while (src[i] && i < dstsize)
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] = '\0';
	}
	return (sl + dl);
}

// int main()
// {
// 	char dest[30]; memset(dest, 0, 30);
//     char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	printf("%s\n", dest);
// 	printf("%zu\t%s\n", ft_strlcat(dest, src, 1), dest);
// 	printf("%zu\t%s\n", strlcat(dest, src, 1), dest);
// 	return (0);
// }
