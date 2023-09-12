CC= gcc
CFLAGS= -c -Wall -Werror -Wextra

Path= ./src

all : ping-pong

ping-pong : main.o game.o player.o map.o ball.o racket.o render.o
	$(CC) $(Path)/main.o $(Path)/game.o $(Path)/player.o $(Path)/map.o $(Path)/ball.o $(Path)/racket.o $(Path)/render.o -o ./ping-pong

main.o : $(Path)/main.c
	$(CC) $(CFLAGS) $(Path)/main.c -o $(Path)/main.o

game.o : $(Path)/game.h $(Path)/game.c
	$(CC) $(CFLAGS) $(Path)/game.c -o $(Path)/game.o

player.o : $(Path)/player.h $(Path)/player.c
	$(CC) $(CFLAGS) $(Path)/player.c -o $(Path)/player.o

map.o : $(Path)/map.h $(Path)/map.c
	$(CC) $(CFLAGS) $(Path)/map.c -o $(Path)/map.o

ball.o : $(Path)/ball.h $(Path)/ball.c
	$(CC) $(CFLAGS) $(Path)/ball.c -o $(Path)/ball.o

racket.o : $(Path)/racket.h $(Path)/racket.c
	$(CC) $(CFLAGS) $(Path)/racket.c -o $(Path)/racket.o

render.o : $(Path)/render.h $(Path)/render.c
	$(CC) $(CFLAGS) $(Path)/render.c -o $(Path)/render.o

clean :
	rm -rf $(Path)/*.o
	rm -rf ping-pong.exe

rebuild : clean all