/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 07:01:56 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/14 16:57:19 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;

	i = 0;
	if (size > 0)
	{
		while (str[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] == '\0';
	}
	return (ft_strlen(src));
}
