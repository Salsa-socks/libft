/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:11:06 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/19 10:47:28 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct	s_list
{
	void *cntent;
	size_t cntent_size;
	struct s_list *next;
}
	t_list;

int		ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putchar_fd(char *c, int fd);
void	ft_putstr(char const *str);
char	ft_itoa(int i);
char	ft_strcpy(char *s1, char *s2);
int		ft_strlen(char *str);
char	ft_strdup(char *src);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putnbr(int i);
void	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);


