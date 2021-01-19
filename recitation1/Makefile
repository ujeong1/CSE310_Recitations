all:app_name1 app_name2

app_name1: FILE_IO.cpp 
	g++ FILE_IO.o -o app_name1

app_name2: STDIN.o
	g++ STDIN.o -o app_name2

FILE_IO.o: FILE_IO.cpp main.h
	g++ FILE_IO.cpp main.h -c

STDIN.o: STDIN.cpp help.h
	g++ STDIN.cpp help.h -c

clean:
	rm FILE_IO.o STDIN.o *.gch
