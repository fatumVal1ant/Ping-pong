CC= gcc
CFLAGS= -c -Wall -Werror -Wextra

Path= ./src

all : game

game : main.o map.o
	$(CC) $(Path)/main.o $(Path)/map.o -o game

main.o : $(Path)/main.c
	$(CC) $(CFLAGS) $(Path)/main.c -o $(Path)/main.o

map.o : $(Path)/map.h $(Path)/map.c
	$(CC) $(CFLAGS) $(Path)/map.c -o $(Path)/map.o

clean :
	rm -rf $(Path)/*.o
	rm -rf game.exe

rebuild : clean all