a.out: testing.o libass2_12CS10012.a
	gcc -m32 testing.o -L. -lass2_12CS10012

testing.o: testing.s myl.h
	gcc -Wall -m32 -c testing.s

libass2_12CS10012.a: ass2_12CS10012.o
	ar -rcs libass2_12CS10012.a ass2_12CS10012.o

ass2_12CS10012.o: ass2_12CS10012.c myl.h
	gcc -Wall -m32 -c ass2_12CS10012.c

clean:
	rm a.out testing.o libass2_12CS10012.a ass2_12CS10012.o