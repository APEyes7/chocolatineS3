##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Compile tests
##

SRC=	guess.c	\
		main.c

TESTS=	tests/unit_test.c

NAME=guess

TNAME=unit_tests

FLAGS= -lm

TFLAGS= -lm -lcriterion --coverage

all: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(FLAGS)

tests_run:	gcc -o $(TNAME) $(SRC) $(TESTS) $(TFLAGS)
			./$(NAME)

clean:
		rm -f *.gcno *.gcda

fclean:	clean
		rm -f $(NAME)


re: fclean all