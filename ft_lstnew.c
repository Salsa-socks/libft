/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:26:13 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/31 12:47:13 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	void const newlink;
	size_t i;

	content_size = 0;
	newlink = (void)malloc(sizeof(void *)content * content_size - 1);
	if (*content == NULL)
	{
		content == NULL;
		content_size = 0;
	}
	i = 0;
	while (content[i] != '\0' && i < content_size)
	{
		newlink[i] = content[i];
		i++;
	}
	free(*content);
	free(content_size);
	return(newlink);
}
