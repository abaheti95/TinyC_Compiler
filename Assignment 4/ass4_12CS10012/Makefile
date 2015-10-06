a.out: y.tab.o lex.yy.o ass4_12CS10012.o 
	gcc ass4_12CS10012.o lex.yy.o y.tab.o -lfl
	./a.out < ass4_12CS10012_test.c #On execution of make all the rules will be directly tested
	#to execute the testing of error file
	# command: ./a.out < ass4_12CS10012_error.c
lex.yy.c: ass4_12CS10012.l
	flex ass4_12CS10012.l
y.tab.c: ass4_12CS10012.y
	yacc -dtv ass4_12CS10012.y
ass3_12CS10012.o: ass4_12CS10012.c
	gcc -c ass4_12CS10012.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c
	gcc -DYYDEBUG -c y.tab.c
	#remove -DYYDEBUG to check only the syntax
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass4_12CS10012.o a.out
