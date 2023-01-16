/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:48:21 by loandrad          #+#    #+#             */
/*   Updated: 2022/12/24 19:50:25 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new1;
	unsigned char	*new2;

	new1 = (unsigned char *)s1;
	new2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*new1 != *new2)
			return (*new1 - *new2);
		new1++;
		new2++;
		n--;
	}
	return (0);
}
