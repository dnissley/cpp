all: main.exe

main.exe: cbrt.o main.cc
	g++ -std=c++11 cbrt.o main.cc -o main.exe

cbrt.o: cbrt.cc cbrt.h
	g++ -std=c++11 -c cbrt.cc 

clean:
	rm -rf *.o *.exe

