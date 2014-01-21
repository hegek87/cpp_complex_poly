all:
	g++ -c -g -Wall -o ./bin/complex.o ../complex_num/complex.cpp
	g++ -c -g -Wall -o ./bin/cp_main.o cp_main.cpp
	g++ -c -g -Wall -o ./bin/complex_poly.o complex_poly.cpp
	g++ -o ./bin/complex_poly ./bin/*.o
