CC=gcc
CFLAGS= -Wall -ansi -pedantic


make: hw8

hw8: hw8.o InvPend.o ODEsolvers.o
	$(CC) $(CFLAGS) -o hw8 hw8.o InvPend.o ODEsolvers.o


hw8.o: hw8.c
	$(CC) $(CFLAGS) -c hw8.c

InvPend.o: InvPend.c
	$(CC) $(CFLAGS) -c InvPend.c

ODEsolvers.o: ODEsolvers.c
	$(CC) $(CFLAGS) -c ODEsolvers.c





test: 
	./hw8 eu .01 13.0 1.0 0.0 -2.0 0.2






clean:
	rm *.o
