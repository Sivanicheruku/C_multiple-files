all:app.o avg.o
avg:avg.o app.o
	gcc avg.o app.o -o avg
avg.o: avg.c
	gcc -c avg.c
app.o:app.c
	gcc -c app.c
