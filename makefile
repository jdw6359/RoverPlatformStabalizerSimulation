CC=gcc
CFLAGS= -Wall -ansi -pedantic


make: hw8

hw8: hw8.o
	$(CC) $(CFLAGS) -o hw8 hw8.o

hw8.o: hw8.c
	$(CC) $(CFLAGS) -c hw8.c




test: 
	./hw8 rk4 .01 10.0 1.0 0.0 -2.0 0.2






clean:
	rm *.o
