ranFunction ?= randomNum.c #Declearing variable "ranFunction" if it have not set.
M ?= main.c 
C := -nostartfile *.o #Declearing variable just once
CC := gcc
options := -Wall -Wextra -Wfatal-errors -Wpedantic

test: main.o randomNum.o
	$(CC) -o ${C}

main.o: main.c randomNum.h
	$(CC) -c $(options) $(M)
randomNum.o : randomNum.c randomNum.h
	$(CC) -c $(options) $(ranFunction) 
.PHONY: clean
clean:
	rm -f *.o #Cleaning files which its name ends with .o
