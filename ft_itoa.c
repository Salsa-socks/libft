/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:53:00 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/28 07:46:52 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);

	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));

	if (i < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-i));
	}

	else if (i >= 10)
		str = ft_strjoin(ft_itoa(i / 10), ft_itoa(i % 10));

	else if (i < 10 && i >= 0)
	{
		str[0] = i + '0';
		str[1] = '\0';
	}
	return (str);
}	
