CC= g++
CFLAGS= -Wall -c

all: build

run:
	./main

build: main.o cube.o
	$(CC) main.o cube.o -Wall -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

cube.o: cube.cpp
	$(CC) $(CFLAGS) cube.cpp

clean:
	rm -rf main *.o