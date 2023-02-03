CC= g++
CFLAGS= -Wall -c
EXT= cpp

all: build run clean

combine: build cube.o

run: main
	./main

build: main.o cube.o
	$(CC) main.o cube.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.$(EXT)

cube.o: cube.cpp
	$(CC) $(CFLAGS) cube.$(EXT)

clean:
	rm -rf main *.o