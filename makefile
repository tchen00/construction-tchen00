all: construct.c
	gcc -o construct construct.c

run:
	./construct
