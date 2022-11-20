/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:00:35 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/09 19:54:54 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main()
// {
// 	int	fd;
// 	char c = 'd';
// 	fd = open("test", O_RDWR | O_CREAT);
// 	ft_putchar_fd(c, fd);
// 	printf("%d", fd);
// 	return (0);
// }
