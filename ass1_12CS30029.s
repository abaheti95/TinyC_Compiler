	.file	"ass1_12CS30029.c"									#source file name
	.section	.rodata											#read only data
	.align 4													#align to 4 byte memory
.LC0:															#label of string - 1st printf in main
	.string	"Enter the order of the square matrix: "
.LC1:															#label of string - 1st scanf in main
	.string	"%d"
	.align 4													##align to 4 byte memory 
.LC2:															#label of string - 2nd printf in main
	.string	"Enter the matrix in row-major order:"
.LC3:															#label of string - 3rd printf in main
	.string	"The input matrix is:"
.LC4:															#label of string - 4th printf in main
	.string	"%d "
.LC5:															#label of string - 5th printf in main
	.string	"In cs order:"
	.text														#start of code
	.globl	main												#main is a global name
	.type	main, @function										#main is a function
main:															#label of main
.LFB0:															#local label
	.cfi_startproc
	pushl	%ebp												#save old base pointer by pushing it into stack
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp											#ebp <- esp new base pointer
	.cfi_def_cfa_register 5
	andl	$-16, %esp 											#adjusting esp to 16 byte memory
	subl	$1632, %esp 										#esp <- esp - 1632   1600 bytes for data[20][20] (= 20*20*4 = 1600)
	movl	$.LC0, (%esp)										#push address of format string for 1st printf statement
	call	printf												#call printf
	leal	20(%esp), %eax										#eax <- esp + 20
	movl	%eax, 4(%esp)										#M[esp + 4] <- eax, 1st parameter to scanf, address where n shall be stored i.e. in M[esp + 20]
	movl	$.LC1, (%esp)										#M[esp] <- address of string "%d", 2nd parameter to scanf
	call	__isoc99_scanf										#call scanf, M[esp + 20] = n
	movl	$.LC2, (%esp)										#push address of format string for 2nd printf statement
	call	puts												#call puts
	movl	$0, 24(%esp)										#M[esp + 24] <- 0, M[esp + 24] denotes i
	jmp	.L2  													#jump to label L2
.L5:															#label L5
	movl	$0, 28(%esp)										#M[esp + 28] <- 0, M[esp + 28] denotes j
	jmp	.L3 													#jump to L3
.L4: 														 	#label L4
	leal	32(%esp), %ecx 										#ecx = esp + 32, base address of array
	movl	24(%esp), %edx 										#edx <- M[esp + 24] , edx = i
	movl	%edx, %eax 											#eax <- edx , eax = i
	sall	$2, %eax											#eax is leftshifted 2bits , eax = 4*eax or 4*i 
	addl	%edx, %eax                      					#eax <- eax + edx, eax = 4*i + i = 5*i
	sall	$2, %eax											#eax <- 4*eax, eax = 4*5*i = 20*i
	movl	28(%esp), %edx 										#edx <- M[esp + 28], edx = j
	addl	%edx, %eax											#eax <- eax + edx, eax = 20*i + j
	sall	$2, %eax											#eax <- 4 * (20 * i + j) (or eax = (sizeof(int)) * (n * i + j))
	addl	%ecx, %eax											#eax <- esp + 32 + 4 * (20*i+j), ecx is the memory address of data[i][j]
	movl	%eax, 4(%esp)										#push 1st parameter for scanf
	movl	$.LC1, (%esp) 										#push 2nd parameter for scanf
	call	__isoc99_scanf										#call scanf, value read will be stored in M[eax] or M[esp+32+4*(20*i+j)]
	addl	$1, 28(%esp)										#j = j + 1
.L3: 															#label L3
	movl	20(%esp), %eax 										#eax <- M[esp + 20] , eax = n
	cmpl	%eax, 28(%esp)										#compare eax and M[esp + 28], n and j
	jl	.L4 													#jump to L4 if j less than n
	addl	$1, 24(%esp) 										#i = i + 1
.L2:															#label L2
	movl	20(%esp), %eax 										#eax <- M[esp + 20] , eax = n
	cmpl	%eax, 24(%esp)										#compare eax and M[esp + 24] , n and i
	jl	.L5 													#jump to L5 if i less than n
	movl	$.LC3, (%esp)                                   	#move address of format string for 3rd printf statement
	call	puts 												#call puts
	movl	$0, 24(%esp) 										#M[esp + 24] <- 0, M[esp + 24] = i i.e. i initialised to 0
	jmp	.L6 													#jump to L6
.L9: 															#label L9
	movl	$0, 28(%esp)										#M[esp + 28] <- 0, j=0
	jmp	.L7 													#jump to L7
.L8:															#label L8
	movl	24(%esp), %edx 									 	#edx = i
	movl	%edx, %eax											#eax = i
	sall	$2, %eax											#eax = 4*i
	addl	%edx, %eax											#eax = 4*i + i = 5*i
	sall	$2, %eax											#eax = 20*i
	movl	28(%esp), %edx										#edx = j
	addl	%edx, %eax											#eax = 20*i + j or eax = n*i+j
	movl	32(%esp,%eax,4), %eax								#eax = 4*eax+esp+32 = esp + 32 + 4 * ( 20*i+j )
	movl	%eax, 4(%esp)										#M[esp+4] <- eax, 1st parameter for 4th printf in main
	movl	$.LC4, (%esp)										#2nd paramter for printf, push address of format string
	call	printf												#call printf
	addl	$1, 28(%esp)										#j = j + 1
.L7: 															#label L7
	movl	20(%esp), %eax                  					#eax = n
	cmpl	%eax, 28(%esp)										#compare n and j
	jl	.L8 													#if j less than n jump to L8
	movl	$10, (%esp)											#M[esp]=10 , 10 is equivalent decimal ascii code for '\n', 1st parameter for putchar
	call	putchar												#call putchar
	addl	$1, 24(%esp)										#i = i+1
.L6: 															#label L6
	movl	20(%esp), %eax 										#eax = M[esp + 20], eax = n
	cmpl	%eax, 24(%esp) 										#compare n and i
	jl	.L9 													#if i less than n jump to L9
	movl	$.LC5, (%esp)										#push address of format string of 5th printf statement
	call	puts												#call puts
	movl	20(%esp), %eax										#eax = M[esp+20], eax = n
	leal	32(%esp), %edx										#edx = esp + 32, base address of data
	movl	%edx, 4(%esp)										#M[esp+4] = edx, 2nd argument for function cs
	movl	%eax, (%esp)										#M[esp] = n, 1st argument for function cs
	call	cs 													#call function cs, esp = esp - 4, M[esp]=eip(= address of next instruction / return address for cs)
	movl	$0, %eax											#eax = 0, return value for main
	leave 														#leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 														#return 
	.cfi_endproc 
.LFE0:
	.size	main, .-main
	.section	.rodata											#read only data
.LC6:															#label for printf in cs
	.string	"%d\n"
	.text														#code of cs starts here
	.globl	cs          										#cs is a global name
	.type	cs, @function										#cs is a function
cs:																#cs label
.LFB1:
	.cfi_startproc
	pushl	%ebp												#store old base pointer, esp = esp - 4, M[esp]=ebp thus M[esp+8]=n and M[esp+12]=base address of data
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp											#ebp = esp, M[ebp+8]=n, M[ebp+12]=data
	.cfi_def_cfa_register 5
	subl	$24, %esp											#esp = esp - 24
	cmpl	$0, 8(%ebp)											#compare n and 0
	jne	.L12													#jump to L12 if n != 0
	movl	$10, (%esp)											#M[esp]=10, 10 is decimal equivalent of the ascii code for '\n'
	call	putchar												#call putchar
	jmp	.L11													#jump to L11
.L12:															#label L12
	cmpl	$1, 8(%ebp)											#compare 1 and n
	jne	.L14 													#jump to L14 if n != 1
	movl	12(%ebp), %eax										#eax = M[ebp+12], eax = &data[0][0]
	movl	(%eax), %eax										#eax = data[0][0]
	movl	%eax, 4(%esp)										#M[esp+4]=eax , M[esp+4]=data[0][0] 2nd argument to 2nd printf in cs 
	movl	$.LC6, (%esp)										#M[esp]=address of format string for 2nd printf, 1st argument
	call	printf												#call printf
	jmp	.L11													#jump to L11
.L14:															#label L14
	movl	$0, 12(%esp)										#M[esp+12]=0, 4th argument to po
	movl	$1, 8(%esp)											#M[esp+8]=1, 3rd argument to po
	movl	12(%ebp), %eax										#eax = M[ebp+12], data
	movl	%eax, 4(%esp)										#M[esp+4]=eax, M[esp+4]=data 2nd argument to po
	movl	8(%ebp), %eax										#eax=M[ebp+8], n
	movl	%eax, (%esp)										#M[esp]=n 1st argument to po
	call	po 													#call po
	movl	12(%ebp), %eax 										#eax = &data[0][0] 
	addl	$80, %eax											#eax = &data[0][0] + 80 = &data[0][0] + 4*20 = &data[1][0] 
	leal	4(%eax), %edx										#edx = eax + 4 = &data[1][1]
	movl	8(%ebp), %eax										#eax = n
	subl	$2, %eax											#eax = n-2
	movl	%edx, 4(%esp)										#M[esp+4]=&data[1][1], 2nd argument to cs
	movl	%eax, (%esp)										#M[esp]=n-2, 1st argument to cs
	call	cs 													#call cs
.L11:															#label L11
	leave														#esp = ebp pop ebp, stack frame is released and value of ebp is restored
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 														#pop eip, eip value is restored thus it points to next instruction in caller
	.cfi_endproc 
.LFE1:
	.size	cs, .-cs
	.globl	po 													#po is a global name
	.type	po, @function 										#po is a function
po:																#po label
.LFB2:
	.cfi_startproc
	pushl	%ebp 												#save value of old ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp 											#ebp = esp
	.cfi_def_cfa_register 5
	subl	$24, %esp 											#esp = esp - 24
	movl	16(%ebp), %eax 										#eax = M[ebp+16] = type
	cmpl	$2, %eax											#compare eax and 2
	je	.L17													#jump to L17 if eax == 2 i.e. if type==2
	cmpl	$2, %eax											#compare type and 2
	jg	.L18													#jump to L18 if type > 2
	cmpl	$1, %eax											#compare type and 1
	je	.L19													#jump to L19 if type == 1
	jmp	.L15													#jump to L15
.L18:
	cmpl	$3, %eax											#compare type and 3
	je	.L20													#jump to L20 if type==3
	cmpl	$4, %eax											#compare type and 4
	je	.L21													#jump to L21 if type==4
	jmp	.L15													#jump to L15
.L19:															#case for type == 1
	movl	8(%ebp), %eax										#eax = M[ebp+8], n
	subl	$1, %eax											#eax = n-1
	cmpl	20(%ebp), %eax										#compare n-1 with ind
	jne	.L22													#if n-1!=ind jump to L22
	movl	$0, 12(%esp)										#M[esp+12]=0, 4th argument to po
	movl	$2, 8(%esp)											#M[esp+8]=2, 3rd argument to po
	movl	12(%ebp), %eax										#eax = M[ebp+12] = data[][20]
	movl	%eax, 4(%esp)										#M[esp+4] = data[][20], 2nd argument to po
	movl	8(%ebp), %eax										#eax = n
	movl	%eax, (%esp)										#M[esp] = n, 1st argument to po
	call	po 													#call po
	jmp	.L15													#jump to L15
.L22:															#label L22
	movl	12(%ebp), %eax										#eax = M[ebp+12] = &data[0][0]
	movl	20(%ebp), %edx 										#edx = M[ebp+20] = ind
	movl	(%eax,%edx,4), %eax									#eax = M[eax+4*edx] = M[&data[0][0] + 4*ind] = M[&data[0][ind]] = data[0][ind]
	movl	%eax, 4(%esp)										#M[esp+4]=eax, 2nd argument for printf
	movl	$.LC4, (%esp)										#M[esp]=address of format string, 1st argument for printf
	call	printf												#call printf
	movl	20(%ebp), %eax										#eax = M[ebp+20] = ind
	addl	$1, %eax											#eax = ind + 1
	movl	%eax, 12(%esp)										#M[esp+12] = ind + 1, 4th argument to po
	movl	$1, 8(%esp)											#M[esp+8]=1, 3rd argument to po
	movl	12(%ebp), %eax										#eax = M[ebp+12] = &data[0][0]
	movl	%eax, 4(%esp)										#M[esp+4]=&data[0][0], 2nd argument to po
	movl	8(%ebp), %eax										#eax = M[ebp+8]=n
	movl	%eax, (%esp)										#M[esp]=n, 1st argument to po
	call	po 													#call po
	jmp	.L15 													#jump to L15
.L17:															#case for type == 2
	movl	8(%ebp), %eax										#eax = M[ebp+8] = n
	subl	$1, %eax											#eax = n-1
	cmpl	20(%ebp), %eax										#compare n-1 and ind
	jne	.L24													#jump to L24 if ind!=n-1
	movl	8(%ebp), %eax										#eax = n
	subl	$1, %eax											#eax = n-1
	movl	%eax, 12(%esp)										#M[esp+12]=n-1, 4th argument for po
	movl	$3, 8(%esp)											#M[esp+8]=3,3rd argument to po
	movl	12(%ebp), %eax										#eax = &data[0][0]
	movl	%eax, 4(%esp)										#M[esp+4]=data, 2nd argument to po
	movl	8(%ebp), %eax										#eax = n
	movl	%eax, (%esp)										#M[esp] = n, 1st argument to po
	call	po 													#call po
	jmp	.L15 													#jump to L15
.L24: 															#label L24
	movl	20(%ebp), %edx										#edx = M[ebp+20] = ind
	movl	%edx, %eax											#eax = ind
	sall	$2, %eax											#eax = 4*ind
	addl	%edx, %eax											#eax = 4*ind + ind = 5*ind
	sall	$4, %eax											#eax = 80*ind
	movl	%eax, %edx											#edx = 80*ind
	movl	12(%ebp), %eax										#eax = &data[0][0]
	addl	%edx, %eax											#eax = &data[0][0] + 80*ind
	movl	8(%ebp), %edx										#edx = n
	subl	$1, %edx											#edx = n-1
	movl	(%eax,%edx,4), %eax									#eax = M[4*edx + eax] = M[&data[0][0] + 80*ind + 4*(n-1)] = M[&data[0][0] + 4*(20*ind+n-1)]=M[&data[ind][n-1]] = data[ind][n-1]
	movl	%eax, 4(%esp)										#M[esp+4]=data[ind][n-1], 2nd argument to printf
	movl	$.LC4, (%esp)										#M[esp]=address of format string, 1st argument to printf
	call	printf												#call printf
	movl	20(%ebp), %eax										#eax=ind
	addl	$1, %eax											#eax=ind+1
	movl	%eax, 12(%esp)										#M[esp+12]=ind+1, 4th argument to po
	movl	$2, 8(%esp)											#M[esp+8]=2, 3rd argument to po
	movl	12(%ebp), %eax										#eax = &data[0][0]
	movl	%eax, 4(%esp)										#M[esp+4]=&data[0][0], 2nd argument to po
	movl	8(%ebp), %eax										#eax = n
	movl	%eax, (%esp)										#M[esp]=n, 1st argument to po
	call	po 													#call po
	jmp	.L15 													#jump to L15
.L20:															#case for type == 3
	cmpl	$0, 20(%ebp)										#compare ind and 0
	jne	.L26 													#if ind!=0 jump to L26
	movl	8(%ebp), %eax										#eax = n
	subl	$1, %eax											#eax = n-1
	movl	%eax, 12(%esp) 										#M[esp+12]=n-1, 4th argument to po
	movl	$4, 8(%esp)											#M[esp+8]=4, 3rd argument to po
	movl	12(%ebp), %eax										#eax = &data[0][0]
	movl	%eax, 4(%esp)										#M[esp+4]= &data[0][0], 2nd argument to po
	movl	8(%ebp), %eax										#eax = n
	movl	%eax, (%esp)										#M[esp] = n, 1st argument to po
	call	po 													#call po
	jmp	.L15 													#jump to L15
.L26: 															#label L26
	movl	8(%ebp), %edx										#edx = n
	movl	%edx, %eax 											#eax = n
	sall	$2, %eax 											#eax = 4*n
	addl	%edx, %eax 											#eax = 5*n
	sall	$4, %eax 											#eax = 80*n
	leal	-80(%eax), %edx 									#edx = eax - 80 = 80*(n-1)
	movl	12(%ebp), %eax 										#eax = &data[0][0]
	addl	%eax, %edx 											#edx = &data[0][0] + 80*(n-1) = &data[n-1][0]
	movl	20(%ebp), %eax 										#eax = ind
	movl	(%edx,%eax,4), %eax 								#eax = M[&data[n-1][0] + 4*ind] = data[n-1][ind]
	movl	%eax, 4(%esp) 										#M[esp+4] = data[n-1][ind], 2nd argument to printf
	movl	$.LC4, (%esp) 										#M[esp]=address of format string, 1st argument to printf
	call	printf 												#call printf
	movl	20(%ebp), %eax	 									#eax = ind
	subl	$1, %eax 											#eax = ind-1
	movl	%eax, 12(%esp) 										#M[esp+12] = ind-1, 4th argument to po
	movl	$3, 8(%esp) 										#M[esp+8] = 3, 3rd argument to po
	movl	12(%ebp), %eax 										#eax = &data[0][0]
	movl	%eax, 4(%esp) 										#M[esp+4] = &data[0][0], 2nd argument to po
	movl	8(%ebp), %eax 										#eax = n
	movl	%eax, (%esp) 										#M[esp] = n, 1st argument to po
	call	po 													#call po
	jmp	.L15 													#jump to L15
.L21:															#case for type==4
	cmpl	$0, 20(%ebp) 										#compare ind and 0
	jne	.L28 													#if ind!=0 jump to L28
	jmp	.L15 													#jump to L15
.L28: 															#label L28
	movl	20(%ebp), %edx 										#edx = ind
	movl	%edx, %eax 											#eax = ind
	sall	$2, %eax 											#eax = 4*ind
	addl	%edx, %eax 											#eax = 5*ind
	sall	$4, %eax 											#eax = 80*ind
	movl	%eax, %edx 											#edx = 80*ind
	movl	12(%ebp), %eax 										#eax = &data[0][0]
	addl	%edx, %eax 											#eax = &data[0][0]+80*ind = &data[ind][0]
	movl	(%eax), %eax 										#eax = data[ind][0]
	movl	%eax, 4(%esp) 										#M[esp+4] = data[ind][0], 2nd argument to printf
	movl	$.LC4, (%esp) 										#M[esp] = address of format string, 1st argument to printf
	call	printf												#call printf
	movl	20(%ebp), %eax										#eax = ind
	subl	$1, %eax 											#eax = ind-1
	movl	%eax, 12(%esp) 										#M[esp+12] = ind-1, 4th argument to po
	movl	$4, 8(%esp) 										#M[esp+8] = 4, 3rd argument to po
	movl	12(%ebp), %eax 										#eax = &data[0][0]
	movl	%eax, 4(%esp) 										#M[esp+4] = &data[0][0], 2nd argument to po
	movl	8(%ebp), %eax 									 	#eax = n
	movl	%eax, (%esp) 										#M[esp] = n, 1st argument to po
	call	po 													#call po
	nop
.L15: 															#label L15
	leave														#esp = ebp, stack frame released and pop ebp, value of ebp restored
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 														#return , pop eip
	.cfi_endproc
.LFE2:
	.size	po, .-po
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
