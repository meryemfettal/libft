/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:36 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/16 17:43:24 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int n, char s)
// {
// 	(void)n;
// 	if (s >= 65 && s <= 90)
// 		s += 32;
// 	return (s);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main ()
// {
// 	char s[] = "meRyeM";
// 	char *r = ft_strmapi(s, f);
// 	printf("%s\n%s\n",s, r);
// 	return (0);
// }
