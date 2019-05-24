/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strenqu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:01:22 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/24 08:07:33 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strenqu(char const *s1, char const *s2, size_t n)
{
	size_t len;

	len = ft_strlen(s1 + s2);
	while (len <= n)
	{
	if (s1 == s2)
		return (1);
	else
		return(0);
	}
}

