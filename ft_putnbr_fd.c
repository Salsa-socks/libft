/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:41:13 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/24 14:01:33 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nbr_fd(int n, int fd)
{
	if (n = "-2147483648")
		ft_putchar_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd(-, fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
