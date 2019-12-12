#Grant Wilkins
#lab 9 CPSC 111 Section 001 Fall 2019
#This is a makefile to accompany the lab9 requirements.
#make will compile, make run will run it, and make clean will
#clean the directory of the executables.
lab9: defs.h driver.c highest.c initialize.c innerProduct.c
	gcc -Wall -o lab9 defs.h driver.c highest.c initialize.c innerProduct.c

run: lab9
	./lab9 < input.txt

clean:
	rm lab9
