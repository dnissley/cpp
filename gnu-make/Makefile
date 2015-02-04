#The compiler to use:
CC=g++

# The flags to use:
CFLAGS=-c

all: hello.exe

hello.exe: main.o factorial.o hello.o
	$(CC) main.o hello.o factorial.o -o hello.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

factorial.o: factorial.cpp
	$(CC) $(CFLAGS) -c factorial.cpp

hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp

clean:
	rm -rf *.o *.exe

