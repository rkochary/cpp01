NAME		= replace

SRCS		= $(wildcard *.cpp)

OBJS		= $(patsubst %.cpp, %.o, $(SRCS))

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

%.o : %.cpp
			$(CC) $(CFLAGS) -o $@ -c $<

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)
			$(RM) *.replaced

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re