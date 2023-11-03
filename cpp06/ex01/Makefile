# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 15:35:42 by Cutku             #+#    #+#              #
#    Updated: 2023/11/03 15:36:50 by Cutku            ###   ########.fr        #
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

SRCS	=	main.cpp Serializer.cpp
OBJS	=	$(SRCS:.cpp=.o)

CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra -std=c++98

NAME		= Serialization

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Ex01 compiled successfully!$(DEF_COLOR)"
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
