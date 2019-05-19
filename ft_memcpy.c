/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:32:18 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/19 10:46:58 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}