a.out: y.tab.o lex.yy.o ass5_12CS10012_translator.o 
	g++ -g ass5_12CS10012_translator.o lex.yy.o y.tab.o -lfl
	# ./a.out < expressiontest.c 
	# ./a.out < declarationtest.c 
	# ./a.out < conditiontest.c 
	# ./a.out < functiontest.c 
	# ./a.out < looptest.c 
	# Above are the individual commands to execute the 5 testing files
	# Each testing file is designed to check different set of rules
lex.yy.c: ass5_12CS10012.l
	flex ass5_12CS10012.l
y.tab.c: ass5_12CS10012.y
	yacc -dtv ass5_12CS10012.y
ass5_12CS10012_translator.o: ass5_12CS10012_translator.cxx
	g++ -g -c ass5_12CS10012_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
	#remove -DYYDEBUG to check only the syntax
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass5_12CS10012_translator.o a.out
