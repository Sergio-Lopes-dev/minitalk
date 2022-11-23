SE_SRC		= server.c
CL_SRC		= client.c

CC			= cc
CFLAG		= -Wall -Wextra -Werror
LFLAG		= -L ./libft -lft
O			= -o
RM			= rm -f

LIBFT		= libft/libft.a

SERVER		= server
CLIENT		= client

NAME		= minitalk

all:		$(NAME)

$(NAME):	$(SERVER) $(CLIENT)

$(SERVER):	$(LIBFT) $(SE_SRC)
		$(CC) $(SE_SRC) $(CFLAG) $(LFLAG) $(O) $(SERVER)

$(CLIENT):	$(LIBFT) $(CL_SRC)
		$(CC) $(CL_SRC) $(CFLAG) $(LFLAG) $(O) $(CLIENT)

$(LIBFT):
		@make -C libft

clean:
		@make clean -C libft

fclean:		clean
		$(RM) $(LIBFT) $(SERVER) $(CLIENT)

re:		fclean all

.PHONY:		all clean fclean re
