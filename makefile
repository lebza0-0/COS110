main: tome.o main.o
	g++ -g -o main tome.o main.o
	
tome.o: tome.h tome.cpp
	g++ -g -c tome.cpp
	
main.o: main.cpp
	g++ -g -c main.cpp

run: main
	./main
	
clean: 
	rm *.o main