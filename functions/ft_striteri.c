/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:51:15 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/05 11:26:43 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    f(unsigned int i ,char *s)
// {
//     s[i] += i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// int main ()
// {
//     char m[]= "manar";
//     ft_striteri(m,f);
//     printf("%s",m);
// }
