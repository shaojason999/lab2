lab2: main.o calc.o
	g++ -o lab2 main.o calc.o
main.o: main.cpp calc.h
	g++ -c main.cpp
calc.o: calc.cpp calc.h
	g++ -c calc.cpp
clean:
	rm lab2 *.o
