test: main.o randomNum.o
	gcc -o -nostartfiles  main.o randomNum.o

main.o: main.c randomNum.h
	gcc -c main.c
randomNum.o : randomNum.c randomNum.h
	gcc -c randomNum.c
.PHONY: clean
clean:
	rm -f main.o randomNum.o
