CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Easy_find
SRCS = main.cpp
HEADRS = easyfind.hpp
OBGS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBGS}
	${CC}  -o ${NAME} ${OBGS}

%.o: %.cpp ${HEADRS}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBGS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean