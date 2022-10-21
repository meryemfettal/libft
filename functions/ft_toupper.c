/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:08:51 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/14 11:38:59 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}
/*int main()
{
	char c = 'd';
	printf("%c", ft_toupper(c));
	int j = 0;
    char str[] = "GeEks@123\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
}*/
