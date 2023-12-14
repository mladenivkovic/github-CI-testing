CFLAGS:=-Wall -Werror -pedantic -std=c11



../bin/my_program: main.c
	if test -z "$$CC"; then echo VARIABLE CC NOT DEFINED; exit 1; fi
	$(CC) $(CFLAGS) main.c -o ../bin/my_program



.PHONY: clean

clean:
	rm -f *.o ../bin/my_program



