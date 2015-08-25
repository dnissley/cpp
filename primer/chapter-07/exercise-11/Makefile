CC = g++
FLAGS = -std=c++11

main: main.cc Sales_data.o
	$(CC) $(FLAGS) -o main main.cc Sales_data.o

Sales_data.o: Sales_data.h Sales_data.cc
	$(CC) $(FLAGS) -c Sales_data.cc

clean:
	rm -rf *.o main

