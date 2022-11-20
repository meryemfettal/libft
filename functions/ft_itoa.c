/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:35:49 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/20 15:44:01 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return (str);
}

static int	ft_count2(int n)
{
	int	cpt;

	cpt = 0;
	if (n == 0)
		cpt++;
	if (n < 0)
		cpt++;
	while (n)
	{
		cpt++;
		n = n / 10;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				sign;
	int				len;
	int				i;

	sign = 1;
	i = 0;
	len = ft_count2(n) + 1;
	num = n;
	if (n < 0)
		num *= -1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (num == 0)
		str[i++] = '0';
	while (num)
	{
		str[i++] = (num % 10) + 48;
		num /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	return (str[i] = '\0', ft_reverse(str));
}
