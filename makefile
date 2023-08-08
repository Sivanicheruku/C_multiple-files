bin:app.o bin.o
	gcc app.o bin.o -o bin
app.o:app.c
	gcc -c app.c
bin.o:bin.c
	gcc -c bin.c
