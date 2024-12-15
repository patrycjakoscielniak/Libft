/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:21:32 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 08:21:33 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_location(const char *s1, const char *set, int start_point)
{
	int		i;
	int		j;
	int		set_len;
	int		found;

	i = start_point;
	set_len = ft_strlen(set);
	while (s1[i])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				found = 1;
			if (set[j] != s1[i] && j == set_len - 1 && found == 0)
				return (i);
			j++;
		}
		if (start_point == 0)
			i++;
		else if (start_point > 0)
			i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		beg;
	int		end;
	char	*res;
	char	*ptr;

	s1_len = ft_strlen(s1);
	beg = ft_location(s1, set, 0);
	if (*set == '\0' || *s1 == '\0')
		end = s1_len;
	else
		end = ft_location(s1, set, s1_len - 1);
	res = (char *)malloc((end - beg) * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	ptr = res;
	while (beg <= end)
	{
		*ptr = s1[beg];
		ptr++;
		beg++;
	}
	*ptr = '\0';
	return (res);
}
