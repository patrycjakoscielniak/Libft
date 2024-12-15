/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 07:05:29 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 07:05:30 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (*little == '\0')
		return (big);
	while (*big && len)
	{
		if (*big == *little && len >= little_len
			&& ft_memcmp(big, little, len) == 0)
			return (big);
		big++;
		len--;
	}
	return (0);
}
