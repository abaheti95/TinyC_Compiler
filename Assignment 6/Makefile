a.out: y.tab.o lex.yy.o ass6_12CS10012_translator.o ass6_12CS10012_target_translator.o
	g++ -g ass6_12CS10012_translator.o ass6_12CS10012_target_translator.o lex.yy.o y.tab.o -lfl
	# ./a.out < expressiontest.c 
	# ./a.out < declarationtest.c 
	# ./a.out < conditiontest.c 
	# ./a.out < functiontest.c 
	# ./a.out < looptest.c 
	# Above are the individual commands to execute the 5 testing files
	# Each testing file is designed to check different set of rules
lex.yy.c: ass6_12CS10012.l
	flex ass6_12CS10012.l
y.tab.c: ass6_12CS10012.y
	yacc -dtv ass6_12CS10012.y
ass6_12CS10012_target_translator.o: ass6_12CS10012_target_translator.cxx
	g++ -g -c ass6_12CS10012_target_translator.cxx
ass6_12CS10012_translator.o: ass6_12CS10012_translator.cxx
	g++ -g -c ass6_12CS10012_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
	#remove -DYYDEBUG to check only the syntax
clean:
	rm a.out test1 test2 test3 test4 test5 lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_12CS10012_translator.o ass6_12CS10012_target_translator.o ass6_12CS10012_test1.o ass6_12CS10012_test2.o ass6_12CS10012_test3.o ass6_12CS10012_test4.o ass6_12CS10012_test5.o libass2_12CS10012.a ass2_12CS10012.o output.o 


test1: ass6_12CS10012_test1.o libass2_12CS10012.a
	gcc -g -m32 ass6_12CS10012_test1.o -o test1 -L. -lass2_12CS10012
ass6_12CS10012_test1.o: ass6_12CS10012_test1.s myl.h
	gcc -g -Wall -m32 -c ass6_12CS10012_test1.s

test2: ass6_12CS10012_test2.o libass2_12CS10012.a
	gcc -g -m32 ass6_12CS10012_test2.o -o test2 -L. -lass2_12CS10012
ass6_12CS10012_test2.o: ass6_12CS10012_test2.s myl.h
	gcc -g -Wall -m32 -c ass6_12CS10012_test2.s


test3: ass6_12CS10012_test3.o libass2_12CS10012.a
	gcc -g -m32 ass6_12CS10012_test3.o -o test3 -L. -lass2_12CS10012
ass6_12CS10012_test3.o: ass6_12CS10012_test3.s myl.h
	gcc -g -Wall -m32 -c ass6_12CS10012_test3.s


test4: ass6_12CS10012_test4.o libass2_12CS10012.a
	gcc -g -m32 ass6_12CS10012_test4.o -o test4 -L. -lass2_12CS10012
ass6_12CS10012_test4.o: ass6_12CS10012_test4.s myl.h
	gcc -g -Wall -m32 -c ass6_12CS10012_test4.s


test5: ass6_12CS10012_test5.o libass2_12CS10012.a
	gcc -g -m32 ass6_12CS10012_test5.o -o test5 -L. -lass2_12CS10012
ass6_12CS10012_test5.o: ass6_12CS10012_test5.s myl.h
	gcc -g -Wall -m32 -c ass6_12CS10012_test5.s


# Make file for output the test code
#output: output.o
output: output.o libass2_12CS10012.a
	gcc -g -m32 output.o -o output -L. -lass2_12CS10012
output.o: output.s myl.h
	gcc -g -Wall -m32 -c output.s

libass2_12CS10012.a: ass2_12CS10012.o
	ar -rcs libass2_12CS10012.a ass2_12CS10012.o

ass2_12CS10012.o: ass2_12CS10012.c myl.h
	gcc -Wall -m32 -c ass2_12CS10012.c
