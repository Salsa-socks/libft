# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 11:56:07 by bnkosi            #+#    #+#              #
#    Updated: 2019/05/27 12:02:47 by bnkosi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c

INC = includes

OUTPUT = ft_*.o

all: $(NAME)

$(NAME):
		@gcc -Wall -Wall -Werror -Wextra -c $(SRCS) -I $(INC)
		@ar rc $(NAME) $(OUTPUT)
		@ranlib $(NAME)

clean:
	@/bin/rm -f $(OUTPUT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
