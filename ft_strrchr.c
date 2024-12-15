/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 07:03:56 by pkosciel          #+#    #+#             */
/*   Updated: 2024/12/08 07:04:01 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchar(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return (&s[i]);
	else
		i--;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (0);
}
