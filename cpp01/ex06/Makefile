CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = HarlFilter
SRC = \
	Harl.cpp \
	main.cpp

OBJ = ${SRC:.cpp=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

%.o: %.cpp %.hpp
	echo $@
	${CC} ${CFLAGS} -c $<

%.o: %.cpp
	echo $@
	${CC} ${CFLAGS} -c $<

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all