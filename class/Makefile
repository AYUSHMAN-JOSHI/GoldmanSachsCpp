CC= g++
CFLAGS= -c -Wall

all: build

run:main
	./main

build: main.o cube.o
	$(CC) main.o cube.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

cube.o: cube.cpp
	$(CC) $(CFLAGS) cube.cpp

clean:
	rm -rf *.o main


