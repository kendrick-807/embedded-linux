ranFunction ?= randomNum.c #Declearing variable "ranFunction" if it have not set.
M ?= main.c
R ?= randomNum.h
C := -nostartfile *.o #Declearing variable just once
CC := gcc
options := -Wall -Wextra -Wfatal-errors -Wpedantic
SOURCES := $(wildcard *.c) #Getting all files which ends with .c
OBJECTS := $(patsubst %.c, %.o, $(SOURCES)) #Replacing the files which ends with .c to .o
random := $(wildcard randomNum*) #Getting all files which starts with randomNum

test: $(OBJECTS)
	$(CC) -o ${C}

main.o: $(M) ${R}
	$(CC) -c $(options) $(M)

randomNum.o : $(random)
	$(CC) -c $(options) $(ranFunction) 

.PHONY: clean

clean:
	rm -f *.o #Cleaning files which its name ends with .o
