# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 18:32:16 by Cutku             #+#    #+#              #
#    Updated: 2023/10/07 19:30:56 by Cutku            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;32m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.SILENT:

SRCS	=	main.cpp Fixed.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra -std=c++98

NAME		= ex02

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Ex02 compiled successfully!$(DEF_COLOR)"
	$(echo -e "\033[5mA")
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re