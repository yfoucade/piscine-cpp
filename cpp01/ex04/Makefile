CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = sifl
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

%.o: %.cpp
	${CC} ${CFLAGS} -c $<

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
	${RM} *.replace

re: fclean all