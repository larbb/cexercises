shellsort : shellsort.o
	gcc -o shellsort shellsort.o 
shellsort.o : shellsort.c
	gcc -c -Wall -pedantic -std=c99 shellsort.c 

clean:
	rm shellsort.o
