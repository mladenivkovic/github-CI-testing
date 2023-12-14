CC:=gcc
CFLAGS:=-Wall -Werror -pedantic -std=c11

../bin/my_program: main.c
	$(CC) $(CFLAGS) main.c -o ../bin/my_program

.PHONY: clean

clean:
	rm -f *.o ../bin/my_program



