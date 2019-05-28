/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:08:04 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/28 11:22:00 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char *s, const char c)
{
	char **result;
	size_t count;
	char *tmp;
	char *last_comma;
	char delim[2];
	size_t idx;
	char *token;

	result = 0;
	count  = 0;
	last_comma = 0;
	delim[0] = c;
	delim[1] = 0;
	idx = 0;

	while (*tmp)
	{
		if (a_delim == *tmp)
		{
			count++;
			last_comma = tmp;
		}
		tmp++;
	}
	count += last_comma < (s + ft_strlen(s) - 1);
	count++;

	result = mallc(sizeof(char *) * count);

	if (result)
	{
		token = ft_strtok(s, delim);

		while (token)
		{
			assert(idx < count);
			*(result + idx++) =  ft_strdup(token);
			token = ft_strtok(o, delim);
		}
		assert(idx == count -1);
		*(result + idx)  = 0;
	}
	return (result);
}
