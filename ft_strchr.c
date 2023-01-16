/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:26:41 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/10 21:18:21 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	letter;
	char	*str;

	i = 0;
	letter = (char) c;
	str = (char *) s;
	while (str[i])
	{
		if (str[i] == letter)
			return (str + i);
		i++;
	}
	if (str[i] == '\0' && letter == '\0')
		return (str + i);
	return ((char *) NULL);
}
