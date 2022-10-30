/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:04:11 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/26 16:22:34 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;
	size_t	i;
	char	*m;

	i = 0;
	m = (char *)s1;
	k = (char *)malloc((ft_strlen(m) + 1) * sizeof(char));
	if (!k)
		return (NULL);
	while (i < ft_strlen(m))
	{
		k[i] = m[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
// int main()
// {
// 	char s[20] = "";
// 	char *s = NULL;
// 	char *d;
// 	d = ft_strdup(s);
// 	printf("%s", d);
// 	return (0);
// }
