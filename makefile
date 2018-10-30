main: missive.o request.o main.o
	g++ -o missive.o request.o main.o -o main

missive.o: missive.h missive.cpp
	g++ -c missive.cpp

request.o: request.h request.cpp
	g++ -c request.cpp
	
main.o: main.cpp
	g++ -c main.cpp

run: main
	./main
	
clean: 
	rm *.o main

zip: 
	tar -cf practical_2.tar.gz  *.h *.cpp makefile