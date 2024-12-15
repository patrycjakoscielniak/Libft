/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:20:09 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/14 14:16:23 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
