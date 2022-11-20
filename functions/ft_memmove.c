/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:07:23 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/20 15:41:56 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cd;
	unsigned char	*cs;

	if (!dst && !src)
		return (NULL);
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
