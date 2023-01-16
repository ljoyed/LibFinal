/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:03:01 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/09 22:22:45 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;

	x = (long int)n;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		x *= -1;
	}
	if (x >= 10)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd(x % 10 + '0', fd);
}
