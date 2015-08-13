CC = g++
FLAGS = -std=c++11

main: main.cc print.o
	$(CC) $(FLAGS) -o main main.cc print.o

print.o: print.h print.cc
	$(CC) $(FLAGS) -c print.cc

clean:
	rm -rf *.o main

