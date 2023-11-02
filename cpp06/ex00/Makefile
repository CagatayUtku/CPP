DEF_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;32m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.SILENT:

SRCS	=	main.cpp ScalarConverter.cpp
OBJS	=	$(SRCS:.cpp=.o)

CC			= c++
RM			= rm -f
CFLAGS		= #-Wall -Werror -Wextra -std=c++98

NAME		= ex00

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Ex00 compiled successfully!$(DEF_COLOR)"
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re