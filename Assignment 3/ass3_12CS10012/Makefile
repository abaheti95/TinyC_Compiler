a.out: y.tab.o lex.yy.o ass3_12CS10012.o 
	gcc ass3_12CS10012.o lex.yy.o y.tab.o -lfl
	./a.out < ass3_12CS10012_test.c
lex.yy.c: ass3_12CS10012.l
	flex ass3_12CS10012.l
y.tab.c: ass3_12CS10012.y
	yacc -dtv ass3_12CS10012.y
ass3_12CS10012.o: ass3_12CS10012.c
	gcc -c ass3_12CS10012.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c
	gcc -c y.tab.c
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass3_12CS10012.o a.out
