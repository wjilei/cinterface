
all: main.o stack.o
	gcc -g -o main main.o stack.o

main.o: main.c stack.h
	gcc -g -c main.c

stack.o: stack.c stack.h mem.h
	gcc -g -c stack.c



clean:
	-rm *.o