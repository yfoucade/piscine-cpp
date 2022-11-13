CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brain
SRC = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp
OBJ = ${SRC:.cpp=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

%.o: %.cpp %.hpp
	${CC} ${CFLAGS} -c $<

%.o: %.cpp
	${CC} ${CFLAGS} -c $<

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all