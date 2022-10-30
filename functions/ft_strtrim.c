/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:24 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/29 12:20:38 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_search(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
			s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_search(s1[start], (char *)set))
		start++;
	while (end > start && ft_search(s1[end], (char *)set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
// int main()
// {
// 	char *s = "13bee37 school abcd 1337";
// 	char *d = "7331";
// 	printf("%s", ft_strtrim(s,d));
// 	return (0);
// }
