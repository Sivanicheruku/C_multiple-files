add:app.o add.o
	gcc app.o add.o -oadd
app.o:app.c
	gcc -c app.c
add.o:add.c
	gcc -c add.c
