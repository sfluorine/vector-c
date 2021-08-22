CC 		= clang
SRC 	= src/*.c
EXEC 	= main
FLAGS  	= -g -Wall -Wextra -std=c99

main: $(SRC)
	$(CC) $(SRC) $(INCLUDE) $(FLAGS) -o $(EXEC)


clean:
	rm $(EXEC)
