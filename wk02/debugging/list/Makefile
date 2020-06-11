# COMP2521 19t1 ... lab 6

CC	= gcc
CFLAGS	= -Wall -Werror -g
LDFLAGS	=

.PHONY: all
all: testQ

testQ:		testQ.o Queue.o
testQ.o:	testQ.c Queue.h
Queue.o:	Queue.c Queue.h

.PHONY: clean
clean:
	-rm -f testQ testQ.o Queue.o
