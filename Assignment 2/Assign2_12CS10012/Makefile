a.out: ass2_main.o libass2_12CS10012.a
	cc -m32 ass2_main.o -L. -lass2_12CS10012

ass2_main.o: ass2_main.c myl.h
	cc -Wall -m32 -c ass2_main.c

libass2_12CS10012.a: ass2_12CS10012.o
	ar -rcs libass2_12CS10012.a ass2_12CS10012.o

ass2_12CS10012.o: ass2_12CS10012.c myl.h
	cc -Wall -m32 -c ass2_12CS10012.c

clean:
	rm a.out ass2_main.o libass2_12CS10012.a ass2_12CS10012.o