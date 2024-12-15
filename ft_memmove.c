/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 07:01:43 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 07:01:44 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	tmp[n];
	int		i;

	i = 0;
	while (i < n)
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}
