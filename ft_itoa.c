/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:33:35 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/11 23:18:16 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

static char	*ft_string(int n)
{
	char	*str;
	int		digits;

	digits = ft_digits(n);
	if (n < 0)
		str = malloc((digits + 2) * sizeof(char));
	else
		str = malloc((digits + 1) * sizeof(char));
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	int		tmp;

	tmp = n;
	str = ft_string(n);
	if (!str)
		return (NULL);
	i = 0;
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	while (n != 0)
	{
		str[i++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (tmp < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
