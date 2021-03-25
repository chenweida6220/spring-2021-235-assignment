main: main.o queue.o
	g++ -o main main.o queue.o

main.o: main.cpp queue.h

queue.o: queue.cpp queue.h

clean:
	rm -f a.out main main.o queue.o
