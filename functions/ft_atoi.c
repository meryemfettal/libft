/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:32:29 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/27 09:34:41 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	add;

	i = 0;
	sign = 1;
	add = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		add = add * 10 + str[i] - 48;
		i++;
	}
	return (add * sign);
}
// int main()
// {
// 	char *s = "-9223372036854775809";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d", atoi(s));
// 	return (0);
// }
