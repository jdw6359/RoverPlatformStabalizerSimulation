CC=gcc
CFLAGS= -Wall -ansi -pedantic


make: hw8 x11 png

hw8: hw8.o InvPend.o ODEsolvers.o
	$(CC) $(CFLAGS) -o hw8 hw8.o InvPend.o ODEsolvers.o -lm


hw8.o: hw8.c
	$(CC) $(CFLAGS) -c hw8.c

InvPend.o: InvPend.c
	$(CC) $(CFLAGS) -c InvPend.c

ODEsolvers.o: ODEsolvers.c
	$(CC) $(CFLAGS) -c ODEsolvers.c


x11: plotx11.o
	$(CC) -Wall -pedantic -o x11 plotx11.o

plotx11.o: plotx11.c
	$(CC) -Wall -pedantic -c plotx11.c

png: plotpng.o
	$(CC) -Wall -pedantic -o png plotpng.o

plotpng.o: plotpng.c
	$(CC) -Wall -pedantic -c plotpng.c 

graph: 
	./png

test: 
	./hw8 eu .01 13.0 1.0 0.0 -2.0 0.2






clean:
	rm *.o
