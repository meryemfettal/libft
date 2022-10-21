/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:04:11 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/20 18:19:19 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;

	k = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!s1)
		return (NULL);
	return ((char *)ft_memcpy(k, s1, ft_strlen(s1)));
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
