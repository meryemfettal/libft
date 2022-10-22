/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:13:12 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/22 17:20:46 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;
	size_t	j;

	d = (char *)haystack;
	s = (char *)needle;
	if (!s)
		return (d);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (d[i + j] == s[j])
		{
			if (!s[j + 1])
			{
				return (d + i);
			}
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
int main()
{
	char s[] = "geeksforgeeks";
	char h[] = "dest";
	printf("%s\n", ft_strnstr(s, h, 20));
	printf("%s", strnstr(s, h, 20));
	return (0);
}
