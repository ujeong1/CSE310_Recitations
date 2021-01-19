#MakeFile example

#target: dependency1 dependency2 ...
#	<tab> command

#NOTE: remember to add the TAB character before the command part

#Typing 'make' will invoke the first target entry in the file

#declare the variable as CC will tell type of compiler
CC=g++

CFLAGS=-c -Wall

#this target will compile all the files "make all"
all: hello
	
hello: main.o function1.o function2.o
	$(CC) main.o function1.o function2.o -o hello

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

function1.o: function1.cpp
	$(CC) $(CFLAGS) function1.cpp

function2.o: function2.cpp
	$(CC) $(CFLAGS) function2.cpp

clean:
	rm -rf *o hello


#this target will compile when "make compile" is executed
#compile:
#	g++ main.cpp func1.cpp function2.cpp -o hello
