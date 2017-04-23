main:main.o area.o
	gcc main.o area.o -o main
main.o:main.c
	gcc -c main.c
area.o:area.c
	gcc -c area.c

clean:
	rm main *.o
