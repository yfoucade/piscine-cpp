CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
NAME = real_type
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJ}

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $<

clean:
	${RM} ${OBJ}
	${RM} ${SRC:.cpp=.d}

fclean: clean
	${RM} ${NAME}

re: fclean all

test: ${OBJ}
	${CXX} ${CXXFLAGS} convert_test test.cpp

-include ${SRC:.cpp=.d}