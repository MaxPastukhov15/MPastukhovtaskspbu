all: ha2

ha2: rbf.o  calculus.o 
	g++ rbf.o -o rbf
	g++ calculus.o -o calculus
rbf.o: rbf.cpp
	g++ -c rbf.cpp

calculus.o: calculus.cpp
	g++ -c calculus.cpp

clean:
	rm -rf *.o ha2
	rm -rf calculus 
	rm -rf rbf
	rm -rf tempbin.bin
