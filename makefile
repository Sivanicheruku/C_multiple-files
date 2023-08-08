ascii:app.o ascii.o
	gcc app.o ascii.o -o ascii
app.o:app.c
	gcc -c app.c
ascii.o:ascii.c
	gcc -c ascii.c

