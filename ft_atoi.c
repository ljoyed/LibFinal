/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:53:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/09 21:07:05 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_space(int i, const char *ptr)
{
	while (ptr[i] == ' ' || \
			ptr[i] == '\t' || \
			ptr[i] == '\f' || \
			ptr[i] == '\n' || \
			ptr[i] == '\r' || \
			ptr[i] == '\v')
		i++;
	return (i);
}

static int	get_sign(int i, const char *ptr)
{
	int	sign;

	sign = 1;
	if (ptr[i] == '-')
	{
		sign *= -1;
	}
	return (sign);
}

int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	if (ptr[i])
		i = skip_space(i, ptr);
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		sign = get_sign(i, ptr);
		i += 1;
	}
	result = 0;
	while (ptr[i] && ptr[i] >= '0' && ptr[i] <= '9')
	{
		result *= 10;
		result += ptr[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
