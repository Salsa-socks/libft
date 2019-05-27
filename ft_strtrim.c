/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:54:13 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/27 14:07:38 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	int i;
	unsigned int len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char)* s + len - 1);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		if ((s[i] != ' ') || (s[i] != '\n') || (s[i] != '\t'))
			i++;
		else
		{
			str[i] = s[i];
			i++;
		}
	}
		str[i] = '\0';
		return (str);
}	
