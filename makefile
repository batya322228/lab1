.PHONY: clean

all: main.o search.o output.o input.o
	gcc -o run main.o search.o output.o input.o 

main.o: main.c
	gcc -c main.c
search.o:  search.c
	gcc -c search.c

output.o: output.c
	gcc -c output.c

input.o: input.c
	gcc -c input.c

clean:
	rm -rvf *.o 1
