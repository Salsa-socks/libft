/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:08:04 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/24 12:40:56 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **strsplit(char const *s, char c)
{
	char *str[];
	int i;
	unsigned int len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof((char)s * len - 1));

	i = 0;
	while (s[i] != '\0')
	{

