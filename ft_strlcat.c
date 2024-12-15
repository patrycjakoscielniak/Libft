/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 07:02:07 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 07:02:08 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;
	int		i;

	dst_len = ft_strlen(dst);
	total_len = dst_len + ft_strlen(src);
	i = 0;
	if (size >= dst_len)
	{
		while (size - dst_len > 1 && src[i])
			dst[dst_len++] = src[i++];
		dst[dst_len] = '\0';
		return (total_len);
	}
	else
		return (ft_strlen(src) + size);
}
