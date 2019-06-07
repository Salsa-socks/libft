/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphafl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:17:52 by bnkosi            #+#    #+#             */
/*   Updated: 2019/06/06 09:48:23 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_alphafl(char const *str)
{
	int len;

	len = ft_strlen(str);
	while (str)
	{
		if (ft_isalpha(str[0]) || ft_isalpha(str[len - 1]))
		{
			str[0] = str[0] - 32;
			str[len - 1] = str[len -1] - 32;
		}
	}
	return (str);
}
