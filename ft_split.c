/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:21:44 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 08:21:45 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_str_num(char const *s, char c)
{
	int	count;	
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			count++;
			x = 1;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

void	ft_free(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_substr(char **res, const char *s, int i, int *j, int word_beg)
{
	int	k;

	res[*j] = ft_calloc(i - word_beg + 2, sizeof(char));
	if (res[*j] == NULL)
		ft_free(res, *j);
	else
	{
		k = 0;
		while (word_beg <= i)
		{
			res[*j][k] = s[word_beg];
			k++;
			word_beg++;
		}
		res[*j][k] = '\0';
		*j += 1;
	}
}

char	**ft_split(char const *s, char c)
{
	int		num_substr;
	int		i;
	int		j;
	int		word_beg;
	char	**res;

	num_substr = ft_str_num(s, c);
	word_beg = -1;
	i = 0;
	j = 0;
	res = ft_calloc(num_substr + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && word_beg < 0)
			word_beg = i;
		else if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
		{
			ft_substr(res, s, i, &j, word_beg);
			word_beg = -1;
		}
		i++;
	}
	res[j + 1] = NULL;
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char	**res;
	char	*s;
	char	c;
	int		i;

	i = 0;
	s = "hello5what5are5you55doing";
	c = '5';
	res = ft_split(s, c);
	printf("%p\n", res);
	while (*res != NULL)
	{
		printf("%s\n", *res);
		res++;
	}
}*/
