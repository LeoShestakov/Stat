all: main.o
	gcc -o stat main.c 

main.o: main.c
	gcc -c main.c

run:
	./stat

clean:
	rm *.o
	
debug: main.c
	gcc -g main.c

gdb: a.out
	gdb a.out