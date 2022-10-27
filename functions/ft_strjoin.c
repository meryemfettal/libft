/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:51:18 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/27 15:32:33 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		s1l;
	int		s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	tmp = malloc((s1l + s2l) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < s1l)
	{
		tmp[i] = s1[i];
		i++;
	}
	i = 0;
	while ((s1l + i) < s1l + s2l)
	{
		tmp[s1l + i] = s2[i];
		i++;
	}
	tmp[s1l + i] = '\0';
	return (tmp);
}
// int main()
// {
// 	char *s1 = "geeks";
// 	char *s2 = "forgeeks";
// 	printf("%s", ft_strjoin(s1,s2));
// 	return (0);
// }
