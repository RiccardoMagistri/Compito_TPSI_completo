CFLAGS = -DDEBUG

all: main

clean: main main.o potenze.o operazioni.o
	rm -rf main.o potenze.o operazioni.o

main: main.o potenze.o operazioni.o
	gcc -o main main.o potenze.o operazioni.o

main.o: main.c operazioni.h potenze.h 
	gcc -c -o main.o main.c

operazioni.o: operazioni.c operazioni.h trace.h
	gcc $(CFLAGS) -c -o operazioni.o operazioni.c

potenze.o: potenze.c potenze.h trace.h
	gcc $(CFLAGS) -c -o potenze.o potenze.c