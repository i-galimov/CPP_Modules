
NAME		=	pipex
#
SOURSE		=	megaphone.cpp
# 
CFLAGS		= -Wall -Werror -Wextra -I $(HEADER) -std=c++98
HEADER		= pipex.hpp

OBJ = $(SOURSE:%.c=%.o)
CC = gcc
#
.PHONY : all clean fclean re bonus
#
all: $(NAME)
#
$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(SOURSE) -o $(NAME)
#
%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -cpp $< -o $@
#
clean :
	@rm -f $(OBJ)
#
fclean : clean
	@rm -f $(NAME)
re     :	fclean all