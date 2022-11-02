CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = more_brainz
SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJ = ${SRC:.cpp=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

%.o: %.cpp %.hpp
	${CC} -c $<

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all