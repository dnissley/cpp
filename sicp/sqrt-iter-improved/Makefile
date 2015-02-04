all: main.exe

main.exe: sqrt.o main.cc
	g++ -std=c++11 sqrt.o main.cc -o main.exe

sqrt.o: sqrt.cc sqrt.h
	g++ -std=c++11 -c sqrt.cc 

clean:
	rm -rf *.o *.exe

