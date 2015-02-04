CC=g++

all: v.exe

v.exe: Vector.o
	$(CC) Vector.o main.cc -o v.exe

Vector.o: Vector.cc
	$(CC) -std=c++11 -c Vector.cc

clean:
	rm -rf *.o *.exe

