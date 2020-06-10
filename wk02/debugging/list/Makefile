# COMP2521 19t1 ... lab 01 Makefile

CC	= gcc -Wall -Werror -g

.PHONY: all
all: useIntList randList

useIntList:	useIntList.o IntList.o
useIntList.o:	useIntList.c IntList.h
IntList.o:	IntList.c IntList.h

randList:	randList.o

.PHONY: clean
clean:
	-rm -f useIntList IntList.o useIntList.o
	-rm -f randList randList.o

.PHONY: give
give: IntList.c timing.txt
	give cs2521 lab01 $^
