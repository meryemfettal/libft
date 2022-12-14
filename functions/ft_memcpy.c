/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:29:35 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/20 15:55:12 by mfettal          ###   ########.fr       */
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
