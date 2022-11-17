ranFunction ?= randomNum.c #Declearing variable "ranFunction" if it have not set.
M ?= main.c 
C := -nostartfile *.o #Declearing variable just once
options := -Wall -Wextra -Wfatal-errors -Wpedantic

test: main.o randomNum.o
	gcc -o ${C}

main.o: main.c randomNum.h
	gcc -c $(options) $(M)
randomNum.o : randomNum.c randomNum.h
	gcc -c $(options) $(ranFunction) 
.PHONY: clean
clean:
	rm -f *.o #Cleaning files which its name ends with .o
