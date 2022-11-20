/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:19:04 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/20 16:47:13 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int main()
{
	int	*i;
	//1010
	ft_memset(i,242,1);
	ft_memset((unsigned char *)i+1,3,1);
	printf("%d", *i);
	return (0);
}
