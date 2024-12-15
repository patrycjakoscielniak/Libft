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

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	size_t		i;

	i = 0;
	if (nmemb && size && nmemb * size > 2147483647)
		return (NULL);
	res = (void *)malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	while (i < nmemb * size)
		res[i++] = 0;
	return (res);
}

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

char    **ft_split(char const *s, char c)
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
			res[j] = ft_calloc(i - word_beg + 1, sizeof(char));
			if (res[j] == NULL)
				ft_free(res, j);
			else
			{
				while (word_beg <= i)
				{
					*res[j] = s[word_beg];
					res[j]++;
					word_beg++;
				}
				*res[j] = '\0';
			}
			word_beg = -1;
		}
		i++;
	}
	res[j + 1] = NULL;
	return (res);
}

int	main(void)
{
	char	**res;
	char	*s;
	int		i;

	i = 0;
	s = "hello5what5areyou55doing";
	res = ft_split(s, '5');
	printf("%p\n", res);
	while (*res != NULL)
	{
		printf("%s\n", *res);
		res++;
	}
}
