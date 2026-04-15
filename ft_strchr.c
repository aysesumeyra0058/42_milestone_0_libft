/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykesim <aykesim@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:17:45 by aykesim           #+#    #+#             */
/*   Updated: 2026/02/20 07:47:49 by aykesim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*ptr;
	unsigned char		tmp_c;

	ptr = (const unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (*ptr)
	{
		if (*ptr == tmp_c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == tmp_c)
		return ((char *)ptr);
	return (NULL);
}
