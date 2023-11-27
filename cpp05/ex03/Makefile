DEF_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;32m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.SILENT:

SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp Intern.cpp\
			PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC			= c++
RM			= rm -f
CPPLAGS		= -Wall -Werror -Wextra -std=c++98

NAME		= Ex03

all: $(NAME)

%.o:	%.cpp
	$(CC) $(INC) $(CPPLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPPLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Ex03 compiled successfully!$(DEF_COLOR)"

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re