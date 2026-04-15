/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykesim <aykesim@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:35:21 by aykesim           #+#    #+#             */
/*   Updated: 2026/02/17 19:43:50 by aykesim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	tmp;

	tmp = 0;
	while (lst)
	{
		lst = lst->next;
		tmp++;
	}
	return (tmp);
}
