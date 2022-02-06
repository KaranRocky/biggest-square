
BSQ = bsq
SRC = *.c
FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) $(SRC) -o $(BSQ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(BSQ)

re: clean all
