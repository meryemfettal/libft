/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:35:17 by mfettal           #+#    #+#             */
/*   Updated: 2022/10/30 17:10:09 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			cpt += 1;
		while (s[i] != c && s[i])
			i++;
	}
	return (cpt);
}

char	*allocate_for_word(const char *s, int start, int end)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!ptr)
		return (NULL);
	while (start + i <= end)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_free(char **a)
{
	int	i;

	i = 0;
	while (a[i])
		free(a[i++]);
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		start[3];

	if (!s)
		return (NULL);
	start[2] = 0;
	start[1] = 0;
	a = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	while (s[start[1]])
	{
		if (s[start[1]] != c)
		{
			start[0] = start[1];
			while (s[start[1]] != c && s[start[1]])
				start[1]++;
			a[start[2]] = allocate_for_word(s, start[0], (start[1] - 1));
			if (!a[start[2]++])
				return (ft_free(a));
		}
		else
			start[1]++;
	}
	return (a[ft_count(s, c)] = NULL, a);
}

// int main()
// {
// 	char *s = "salam guys :D";
// 	char c = ' ';
// 	int index = 0;
// 	char **arr = ft_split(s, c);

// 	while (arr[index])
// 	{
// 		printf("string at index %d :%s\n", index , arr[index]);
// 		index++;
// 	}
// 	return (0);
// }
