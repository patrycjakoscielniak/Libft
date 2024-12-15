/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:20:53 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 08:20:54 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*dst;

	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	dst = res;
	while (len - 1)
	{
		*dst = s[start];
		dst++;
		start++;
		len--;
	}
	*dst = '\0';
	return (res);
}
