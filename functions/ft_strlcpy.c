/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:20:56 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/27 09:38:26 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		sl;
	size_t	i;

	i = 0;
	sl = (int)ft_strlen(src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (sl);
}
// int main()
// {
// 	char s[] = "forgeeks";
// 	char d[10] = "geeks113";
// 	printf("%zu\n", ft_strlcpy(d,s,5));
// 	printf("%s", d);
// }
