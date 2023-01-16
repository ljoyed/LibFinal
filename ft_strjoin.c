/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:08:14 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/10 21:39:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_len;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return ((char *) NULL);
	res_len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	res = (char *)malloc(sizeof(char) * res_len);
	if (!res)
		return ((char *) NULL);
	i = 0;
	while (*s1)
	{
		res[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		res[i++] = *s2;
		s2++;
	}
	res[i] = '\0';
	return (res);
}
