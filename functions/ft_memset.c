/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:19:04 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/14 10:58:55 by mfettal          ###   ########.fr       */
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
/*int main()
{
    int c[7] = {1,5,8,6,3,9};
    int i = 0;
    ft_memset(c, 1, 3 *sizeof(int));
    while (i < 7)
    {
        printf("%d\n", c[i++]);
    }
	char c[20] = "Meryem fettal";
    char i = 'a';
    ft_memset(c + 4, i, 3);
    printf("%s", c);
    return (0);
}*/
