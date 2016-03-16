all: bmi.o lab2.o
	g++ bmi.o lab2.o -o lab2
lab2.o: lab2.cpp bmi.h
	g++ -c lab2.cpp
bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp
clean:
	rm all*.o
