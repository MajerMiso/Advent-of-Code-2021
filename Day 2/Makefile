CC=gcc
CFLAGS=-Wall -std=c11 -pedantic -lm  -ggdb3
FILE1= Task_01.c 
FILE2= Task_02.c

all:task01 task02

task01: $(FILES)
	$(CC) $(CFLAGS) -o $@ $(FILE1)

task02: $(FILES)
	$(CC) $(CFLAGS) -o $@ $(FILE2)

clean:
	@rm -f task01 task02