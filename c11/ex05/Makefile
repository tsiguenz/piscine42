SRCS = ft_atoi.c ft_putnbr.c ft_operator.c main.c
OBJS = $(addprefix ./srcs/, ${SRCS:.c=.o})
NAME = do-op

.c.o: 
	gcc -Wall -Wextra -Werror -c $< -I ./headers -o ${<:.c=.o}

${NAME}: ${OBJS}
	gcc -Wall -Wextra -Werror $^ -o $@

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
