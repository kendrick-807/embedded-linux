ranFunction ?= randomNum.c #Declearing variable "ranFunction" if it have not set.
M ?= main.c 
C := -nostartfile *.o #Declearing variable just once

test: main.o randomNum.o
	gcc -o ${C}

main.o: main.c randomNum.h
	gcc -c $(M)
randomNum.o : randomNum.c randomNum.h
	gcc -c $(ranFunction)
.PHONY: clean
clean:
	rm -f *.o #Cleaning files which its name ends with .o
