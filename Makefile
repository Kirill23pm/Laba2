all: laba2.o labb2.o lab2.o
	gcc laba2.o labb2.o lab2.o -o prog
lab2.o: lab2.c
	gcc -c lab2.c
laba2.o: laba2.c
	gcc -c laba2.c
labb2.o: labb2.c
	gcc -c labb2.c
