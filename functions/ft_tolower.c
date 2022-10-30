/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:54:36 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/14 11:38:13 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		ch += 32;
	return (ch);
}
/*int main()
{
	char c = 'D';
	printf("%c\n", ft_tolower(c));
	int j = 0;
    char str[] = "GEEKSFORGEEKS\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
}*/
