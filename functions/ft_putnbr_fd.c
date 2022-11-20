/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:23:27 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/04 18:07:19 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	if (nbr < 10)
	{
		ft_putchar_fd((nbr + 48), fd);
		return ;
	}
	ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd(((nbr % 10) + 48), fd);
}

// int main()
// {
// 	int	fd;
// 	int c = -42;
// 	fd = open("test", O_RDWR | O_CREAT);
// 	ft_putnbr_fd(c, fd);
// 	printf("%d", fd);
// 	return (0);
// }
