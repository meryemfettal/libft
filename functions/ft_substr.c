/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:12:40 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/19 22:29:10 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*tmp;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) <= start + len)
		tmp = malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < len && s[start])
	{
			tmp[i] = s[start];
			i++;
			start++;
	}
	tmp[i] = '\0';
	return (tmp);
}

// int main()
// {
// 	char *s = ft_substr("tripouille", 0, 42000);
// 	printf("%s",s);
// 	return (0);
// }
