CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
NAME = forms
SRC = \
	Bureaucrat.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Form.cpp \
	main.cpp

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

-include ${SRC:.cpp=.d}