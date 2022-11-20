/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:41:13 by mfettal           #+#    #+#             */
/*   Updated: 2022/11/05 11:26:33 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
// int main()
// {
// 	int	fd;
// 	char *c = "meryem";
// 	fd = open("tdr", O_RDWR | O_CREAT);
// 	ft_putstr_fd(c, fd);
// 	printf("%d", fd);
// 	return (0);
// }
