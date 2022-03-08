
objects = main.o stack.o

CC=gcc

all: $(objects)
	$(CC) -g -o main $(objects)

main.o: main.c stack.h
	$(CC) -g -c main.c

stack.o: stack.c stack.h mem.h
	$(CC) -g -c stack.c



clean:
	@rm main $(objects)