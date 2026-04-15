/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykesim <aykesim@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:07:15 by aykesim           #+#    #+#             */
/*   Updated: 2026/02/20 08:13:56 by aykesim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*ptr;
	unsigned char		tmp_c;
	size_t				len;

	ptr = (const unsigned char *)s;
	tmp_c = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (ptr[len] == tmp_c)
			return ((char *)(s + len));
		len--;
	}
	if (ptr[len] == tmp_c)
		return ((char *)(s + len));
	return (NULL);
}
