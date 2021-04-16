main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f a.out main tests main.o tests.o funcs.o 
