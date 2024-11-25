CC = g++
CFLAGS = -Wall -g -lstdc++
all: main
run: main
	./main
main: main.o prime.o
	$(CC) $( CFLAGS ) -o main main.o prime.o
main.o: main.cpp
	$(CC) $( CFLAGS ) -c main.cpp
prime.o: prime.cpp
	$(CC) $(CFLAGS) -c prime.cpp
clean:
	rm -f *.o main