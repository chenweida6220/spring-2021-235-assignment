main: main.o Node.o BSTree.o
	g++ -o main main.o Node.o BSTree.o

main.o: main.cpp Node.h BSTree.h

Node.o: Node.cpp Node.h

BSTree.o: BSTree.cpp BSTree.h

clean:
	rm -f a.out main main.o Node.o BSTree.o
