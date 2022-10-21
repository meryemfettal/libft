/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:29:35 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/14 10:54:22 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	*cd;

	i = 0;
	cs = (unsigned char *)src;
	cd = (unsigned char *)dest;
	while (cd && cs && i < n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	char c[20] = "fettal meryem";
	char d[20];
	ft_memcpy(d ,c +7, 6);
	printf("%s",d);
	return (0);
}*/
