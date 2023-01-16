/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:50:57 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/10 22:00:11 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!small[i])
		return ((char *) big);
	while (i < size && big[i])
	{
		j = 0;
		while (big[i + j] && small[j] && big[i + j] == small[j] && i + j < size)
			j++;
		if (!small[j])
			return ((char *)(big + i));
		i++;
	}
	return ((char *) NULL);
}
