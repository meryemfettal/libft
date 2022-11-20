/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:50:10 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/04 16:54:18 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// int main()
// {
// 	int	fd;
// 	char *c = "meryem";
// 	fd = open("tst", O_RDWR | O_CREAT);
// 	ft_putendl_fd(c, fd);
// 	printf("%d", fd);
// 	return (0);
// }
