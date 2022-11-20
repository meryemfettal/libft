/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:09:43 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/05 12:20:20 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		t;
	char	*tmp;

	t = ft_strlen(s);
	tmp = (char *)s;
	if ((char)c == 0)
		return (tmp + ft_strlen(tmp));
	while (t--)
	{
		if (tmp[t] == (char)c)
		{
			return (&tmp[t]);
		}
	}
	return (NULL);
}

// int main ()
// {
//    char str[] = "tripouille";
//    char ch = 't';
//    printf("%s",ft_strrchr(str, ch));
//    return(0);
// }
