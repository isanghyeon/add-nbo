all: add-nbo

add-nbo : add-nbo.o main.o
	g++ -o add-nbo add-nbo.o main.o

add-nbo.o : add-nbo.h add-nbo.c
	g++ -c -o add-nbo.o add-nbo.c

main.o : main.c add-nbo.h
	g++ -c -o main.o main.c

clean :
	rm -f add-nbo
	rm -f *.o