/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:01:28 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/10 22:09:04 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	s_len;

	if (!s)
		return ((char *) NULL);
	s_len = ft_strlen((char *) s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return ((char *) NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
