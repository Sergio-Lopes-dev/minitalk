SE_SRC		= server.c
CL_SRC		= client.c

CC		= cc
CFLAG		= -Wall -Wextra -Werror
LFLAG		= -L ./libft -lft
O		= -o
RM		= rm -f

LIBFT		= libft/libft.a

SERVER		= server
CLIENT		= client

NAME		= minitalk

all:		$(NAME)

$(NAME):	$(SERVER) $(CLIENT)

$(SERVER):	$(LIBFT)
		$(CC) $(SE_SRC) $(CFLAG) $(LFLAG) $(O) $(SERVER)

$(CLIENT):	$(LIBFT)
		$(CC) $(CL_SRC) $(CFLAG) $(LFLAG) $(O) $(CLIENT)

$(LIBFT):
		@make -C libft

clean:
		@make clean -C libft

fclean:		clean
		@make fclean -C libft
		$(RM) $(SERVER) $(CLIENT)

re:		fclean all

.PHONY:		all clean fclean re
