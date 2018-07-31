#
#
test: main.o add.o
	g++ -o test main.o add.o

main.o: main.cpp add.hpp
	g++ -c main.cpp

add.o: add.cpp add.hpp
	g++ -c add.cpp

clean:
	rm *.o test
