/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:13 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/05 12:18:12 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if ((char)c == 0)
		return (tmp + ft_strlen(tmp));
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
//    char str[] = "tripouille";
//    char ch = 0;
//    printf("%s",ft_strchr(str, ch));
//    return(0);
// }
