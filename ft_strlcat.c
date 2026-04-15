/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykesim <aykesim@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:30:25 by aykesim           #+#    #+#             */
/*   Updated: 2026/01/20 15:43:33 by aykesim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_capacity)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	if (dest_len >= dest_capacity)
		return (dest_capacity + ft_strlen(src));
	i = 0;
	while ((dest_len + i) < (dest_capacity - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
