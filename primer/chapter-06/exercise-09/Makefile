CC = g++
FLAGS = -std=c++11

main: factMain.cc fact.o
	$(CC) $(FLAGS) -o main factMain.cc fact.o

fact.o: fact.cc
	$(CC) $(FLAGS) -c fact.cc

clean:
	rm -rf *.o main

