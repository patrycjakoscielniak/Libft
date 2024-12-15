/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:21:04 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 08:21:05 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*str;
	size_t	t_len;

	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(t_len * sizeof(int));
	if (res == NULL)
		return (NULL);
	str = res;
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (res);
}
