CC = g++
FLAGS = -std=c++11

main: main.cc
	$(CC) $(FLAGS) -D NDEBUG -o main main.cc

debug: main.cc
	$(CC) $(FLAGS) -o main main.cc

clean:
	rm -rf main

