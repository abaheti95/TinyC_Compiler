	.file	"ass1_12CS10012.c"									# Source File Name
	.section	.rodata											# read only data
	.align 4													# align to 4 byte memory
.LC0:															# label to 0th printf string in main
	.string	"Enter the order of the square matrix: "		
.LC1:															# label to 1st scanf string in main
	.string	"%d"
	.align 4													# align to 4 byte memory
.LC2:															# label to 2nd printf string in main
	.string	"Enter the matrix in row-major order:"
.LC3:															# label to 3rd printf string in main
	.string	"The input matrix is:"
.LC4:															# label to 4th printf string in main
	.string	"%d "
.LC5:															# label to 5th printf string in main
	.string	"In cs order:"
	.text														# Code starts here
	.globl	main												# Global name is main
	.type	main, @function										# type of main is function
main:															# main label
.LFB0:															# local label
	.cfi_startproc
	pushl	%ebp												# saving the previous base pointer in the stack
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp											# stack pointer <-- base pointer
	.cfi_def_cfa_register 5
	andl	$-16, %esp											# adding 16 bytes space to stack
	subl	$1632, %esp											# storing 1600 bytes in memory(ORD*ORD*4 = 20*20*4 = 1600)
	movl	$.LC0, (%esp)										# storing the address of the 0th printf string in estack
	call	printf												# printf call
	leal	20(%esp), %eax										# %eax <-- %esp + 20
	movl	%eax, 4(%esp)										# M[%esp + 4] <-- %eax, the location where variable n will be stored
	movl	$.LC1, (%esp)										# storing the address of 1st scanf string in stack pointer, 1st parameter of scanf
	call	__isoc99_scanf										# scanf call
	movl	$.LC2, (%esp)										# storing the address of 2nd printf string in stack pointer
	call	puts												# puts call
	movl	$0, 24(%esp)										# 0 <-- M[%esp + 24], i = 0
	jmp	.L2														# jump to label L2
.L5:															# L5 label
	movl	$0, 28(%esp)										# 0 <-- M[%esp + 28], j = 0
	jmp	.L3														# jump to label L3
.L4:															# L4 label
	leal	32(%esp), %ecx										# %esp + 32 <-- %ecx, storing the base address of the array in %ecx
	movl	24(%esp), %edx										# M[%esp + 24] <-- %edx, value of i stored in %edx 
	movl	%edx, %eax											# %edx <-- %eax, %eax = i
	sall	$2, %eax											# %eax is left shifted by 2, effectively %eax = %eax*4 = i*4
	addl	%edx, %eax											# %eax = %eax + %edx, %eax = i + i*4 = i*5
	sall	$2, %eax											# %eax is left shifted by 2, effectively %eax = %eax*4 = i*20
	movl	28(%esp), %edx										# %edx = M[%esp + 28], %edx = j
	addl	%edx, %eax											# %eax = %eax + %edx, %eax = i*20 + j
	sall	$2, %eax											# %eax is left shifted by 2, effectively %eax = %eax*4 = 4*(i*20 + j)
	addl	%ecx, %eax											# %eax = %eax + %ecx, adding the previous value to array base address
	movl	%eax, 4(%esp)										# %esp + 4 = %eax, storing the location of address of integer to be filled, scanf 2nd parameter
	movl	$.LC1, (%esp)										# storing the address of 1st scanf string in stack pointer, scanf 1st parameter
	call	__isoc99_scanf										# scanf call
	addl	$1, 28(%esp)										# j = j + 1
.L3:															# L3 label
	movl	20(%esp), %eax										# %eax = M[%esp + 20], %eax = n
	cmpl	%eax, 28(%esp)										# compare %eax and M[%esp + 28], compare n and j
	jl	.L4														# if j<n jump to label L4
	addl	$1, 24(%esp)										# M[%esp + 24]++, i = i + 1
.L2:															# L2 label
	movl	20(%esp), %eax										# %eax = M[%esp + 20], %eax = n
	cmpl	%eax, 24(%esp)										# Compare %eax and M[%esp + 24], Compare n and i
	jl	.L5														# if i < n jump to L5
	movl	$.LC3, (%esp)										# storing the address of 3rd printf string in %esp
	call	puts												# puts call
	movl	$0, 24(%esp)										# M[%esp + 24] = 0, i = 0
	jmp	.L6														# jump to L6
.L9:															# L9 label
	movl	$0, 28(%esp)										# M[%esp + 28] = 0, j = 0
	jmp	.L7														# jump to L7
.L8:															# L8 label
	movl	24(%esp), %edx										# %edx = M[%esp + 24] = i
	movl	%edx, %eax											# %eax = %edx = i
	sall	$2, %eax											# left shift %eax by 2, %eax = %eax*4 = i*4
	addl	%edx, %eax											# %eax = %eax + %edx, %eax = i*4 + i = i*5
	sall	$2, %eax											# left shift %eax by 2, %eax = %eax*4 = i*5*4 = i*20
	movl	28(%esp), %edx										# %edx = M[%esp + 28] = j
	addl	%edx, %eax											# %eax += %edx, %eax = i*20 + j
	movl	32(%esp,%eax,4), %eax								# %eax = 32 + %esp + 4*%eax = 32 + %esp + 4*(i*20 + j)
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax, 2nd parameter of 4th printf
	movl	$.LC4, (%esp)										# storing the address of 4th printf string in stack
	call	printf												# printf call
	addl	$1, 28(%esp)										# M[%esp + 28]++, j = j + 1
.L7:															# L7 label
	movl	20(%esp), %eax										# %eax = M[%esp + 20] = n
	cmpl	%eax, 28(%esp)										# Compare %eax and M[%esp + 28], n and j
	jl	.L8														# if j<n jump to L8
	movl	$10, (%esp)											# M[%esp] = 10, 10 is equivalent to '\n', parameter for putchar
	call	putchar												# putchar call
	addl	$1, 24(%esp)										# M[%esp + 24]++, i = i + 1
.L6:															# L6 label
	movl	20(%esp), %eax										# %eax = M[%esp + 20] = n
	cmpl	%eax, 24(%esp)										# Compare %eax with M[%esp + 24], n and i
	jl	.L9														# if i<n jump to L9
	movl	$.LC5, (%esp)										# storing the address of 5th printf string in the stack
	call	puts												# puts call
	movl	20(%esp), %eax										# %eax = M[%esp + 20] = n
	leal	32(%esp), %edx										# %edx = %esp + 32, base address of the data
	movl	%edx, 4(%esp)										# M[%esp + 4] = %edx, 2nd parameter for the cs function
	movl	%eax, (%esp)										# n is the 1st parameter of cs function
	call	cs													# cs function call
	movl	$0, %eax											# %eax = 0
	leave														# leace
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:															# local label
	.size	main, .-main
	.section	.rodata											# read only data
.LC6:															# label to 6th printf string in function cs
	.string	"%d\n"
	.text														# function cs code
	.globl	cs													# global name is cs
	.type	cs, @function										# type of cs is function
cs:																# cs label
.LFB1:
	.cfi_startproc
	pushl	%ebp												# storing the previous base pointer
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp											# %ebp = %esp
	.cfi_def_cfa_register 5
	subl	$24, %esp											# %esp += 24
	cmpl	$0, 8(%ebp)											# compare 0 and M[%ebp + 8], 0 and n
	jne	.L12													# if n!=0 jump to L12
	movl	$10, (%esp)											# M[%esp] = 10, 10 is the ascii value of '\n', parameter for putchar
	call	putchar												# putchar call
	jmp	.L11													# jump to L11
.L12:															# L12 label
	cmpl	$1, 8(%ebp)											# Compare M[%ebp + 8] and 1, n and 1
	jne	.L14													# if n!=1 jump to L14
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12], %eax = address of the array
	movl	(%eax), %eax										# %eax = address of %eax = data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax, first parameter for printf
	movl	$.LC6, (%esp)										# storing the address of 6th printf string
	call	printf												# printf call
	jmp	.L11													# jump to L11
.L14:															# L14 label
	movl	$0, 12(%esp)										# M[%esp + 12] = 0, 4th parameter to po
	movl	$1, 8(%esp)											# M[%esp + 8] = 1, 3rd parameter to po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = address of the array
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax, 2nd parameter to po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8], n
	movl	%eax, (%esp)										# 1st parameter to po
	call	po													# po call
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	addl	$80, %eax											# %eax += 80, %eax = &data[0][0] + 80 = &data[1][0], 80 = 20*4
	leal	4(%eax), %edx										# %edx = %eax + 4 = &data[1][1]
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	subl	$2, %eax											# %eax -= 2, %eax = n - 2
	movl	%edx, 4(%esp)										# M[%esp + 4] = %edx = &data[1][1], 2nd parameter to cs
	movl	%eax, (%esp)										# M[%esp] = %eax = n - 2, 1st parameter to cs
	call	cs													# cs call
.L11:															# L11 label
	leave														# leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret															# return to its caller
	.cfi_endproc
.LFE1:
	.size	cs, .-cs
	.globl	po													# global name is po
	.type	po, @function										# type of po is function
po:																# po label
.LFB2:
	.cfi_startproc
	pushl	%ebp												# store the previous base pointer
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp											# %ebp = %esp
	.cfi_def_cfa_register 5
	subl	$24, %esp											# %esp -= 24
	movl	16(%ebp), %eax										# %eax = M[%ebp + 16] = M[%esp - 8] = type
	cmpl	$2, %eax											# compare %eax and 2, type and 2
	je	.L17													# if type==2 jump to L17
	cmpl	$2, %eax											# Compare %eax and 2, type and 2
	jg	.L18													# if type>2 jump to L18
	cmpl	$1, %eax											# Compare %eax and 1, type and 1
	je	.L19													# if type==1 jump to L19
	jmp	.L15													# jump L15
.L18:															# L18 label
	cmpl	$3, %eax											# Compare %eax and 3, type and 3
	je	.L20													# if type==3 jump to L20
	cmpl	$4, %eax											# Compare %eax and 4, type and 4
	je	.L21													# if type==4 jump to L21
	jmp	.L15													# jump to L15
.L19:															# L19 label
	movl	8(%ebp), %eax										# %eax = M[%ebp 8] = n
	subl	$1, %eax											# %eax -= 1, %eax = n - 1
	cmpl	20(%ebp), %eax										# Compare %eax and M[%ebp + 20], n - 1 and ind
	jne	.L22													# if n-1!=ind jump to L22
	movl	$0, 12(%esp)										# M[%esp + 12] = 0, 4th parameter to function po
	movl	$2, 8(%esp)											# M[%esp + 8] = 2, 3rd parameter to function po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = data[][20]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax, 2nd parameter to function po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# n is the 1st parameter to function po
	call	po													# call po
	jmp	.L15													# jump to L15
.L22:															# L22 label
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	movl	20(%ebp), %edx										# %edx = M[%ebp + 20] = ind
	movl	(%eax,%edx,4), %eax									# %eax = M[%eax + %edx*4] = M[&data[0][0] + ind*4] = data[0][ind]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax, 2nd parameter for printf
	movl	$.LC4, (%esp)										# storing the address of 4th printf string in stack, 1st parameter for printf
	call	printf												# printf call
	movl	20(%ebp), %eax										# %eax = M[%ebp + 20] = ind
	addl	$1, %eax											# %eax +=1, ind + 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = ind+1, 4th parameter for po
	movl	$1, 8(%esp)											# M[%esp + 8] = 1,type, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%esp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# call po
	jmp	.L15													# jump to L15
.L17:															# L17 label, type == 2
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n 
	subl	$1, %eax											# %eax -= 1, n - 1
	cmpl	20(%ebp), %eax										# Compate %eax and M[%ebp + 20], n-1 and ind
	jne	.L24													# if ind!=n-1 jump to L24
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	subl	$1, %eax											# %eax -= 1, n - 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = n - 1, 4th parameter for po
	movl	$3, 8(%esp)											# M[%esp + 8] = 3, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# po call
	jmp	.L15													# jump to L15
.L24:															# L24 label
	movl	20(%ebp), %edx										# %edx = M[%ebp + 20] = ind
	movl	%edx, %eax											# %eax = %edx = ind
	sall	$2, %eax											# left shift %eax by 2, %eax = %eax*4 = ind*4
	addl	%edx, %eax											# %eax += %edx, %eax = ind*5
	sall	$4, %eax											# left shift %eax by 4, %eax = %eax*16 = ind*80
	movl	%eax, %edx											# %edx = %eax = ind*80
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	addl	%edx, %eax											# %eax += %edx = &data[0][0] + ind*80 = &data[ind][0]
	movl	8(%ebp), %edx										# %edx = M[%ebp + 8] = n
	subl	$1, %edx											# %edx -= 1, n - 1
	movl	(%eax,%edx,4), %eax									# %eax = %eax + %edx*4 = M[&data[ind][0] + (n - 1)*4] = data[ind][n-1]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = data[ind][n-1], 2nd parameter for printf
	movl	$.LC4, (%esp)										# storing the address of 4th printf string in stack, 1st parameter for printf
	call	printf												# printf call
	movl	20(%ebp), %eax										# %eax = M[%ebp + 20] = ind
	addl	$1, %eax											# %eax += 1, ind + 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = %eax = ind + 1, 4th parameter for po
	movl	$2, 8(%esp)											# M[%esp + 8] = 2, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%esp + 12] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# po call
	jmp	.L15													# jump to L15
.L20:															# L20 label, type==3
	cmpl	$0, 20(%ebp)										# Compare 0 and M[%ebp + 20], 0 and ind
	jne	.L26													# if ind!=0 jump to L26
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	subl	$1, %eax											# %eax -= 1, n - 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = %eax = n - 1, 4th parameter for po
	movl	$4, 8(%esp)											# M[%esp + 8] = 4, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# po call
	jmp	.L15													# jump to L15
.L26:															# L26 label
	movl	8(%ebp), %edx										# %edx = M[%ebp + 8] = n
	movl	%edx, %eax											# %eax = %edx = n
	sall	$2, %eax											# left shift %eax by 2, %eax = %eax*4 = n*4
	addl	%edx, %eax											# %eax += %edx, %eax = n*5
	sall	$4, %eax											# left shift %eax by 4, %eax = %eax*16 = n*80
	leal	-80(%eax), %edx										# %edx = %eax - 80 = (n-1)*80
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	addl	%eax, %edx											# %edx += %eax = &data[0][0] + (n-1)*80 = &data[n-1][0]
	movl	20(%ebp), %eax										# %eax = M[%ebp + 20] = ind
	movl	(%edx,%eax,4), %eax									# %eax = M[%edx + %eax*4] = M[&data[n-1][0] + ind*4] = data[n-1][ind]
	movl	%eax, 4(%esp)										# M[%esp + 4] = data[n-1][ind], 2nd parameter printf
	movl	$.LC4, (%esp)										# storing the address of 4th print string in stack, 1st printf parameter
	call	printf												# printf call
	movl	20(%ebp), %eax										# %eax = M[%ebp + 20] = ind
	subl	$1, %eax											# %eax -= 1, ind - 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = %eax = ind - 1, 4th parameter for po
	movl	$3, 8(%esp)											# M[%esp + 8] = 3, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 20] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# po call
	jmp	.L15													# jump L15
.L21:															# L21 label, type==4
	cmpl	$0, 20(%ebp)										# Compare 0 and M[%ebp + 20], 0 and ind
	jne	.L28													# if 0!=ind jump to L28
	jmp	.L15													# jump to L15
.L28:															# L28 label
	movl	20(%ebp), %edx										# %edx = M[%ebp + 20] = ind
	movl	%edx, %eax											# %eax = %edx = ind
	sall	$2, %eax											# left shift %eax by 2, %eax = %eax*4 = ind*4
	addl	%edx, %eax											# %eax += %edx, %eax = ind*5
	sall	$4, %eax											# left shift %eax by 4, %eax = %eax*16 = ind*80
	movl	%eax, %edx											# %edx = %eax = ind*80
	movl	12(%ebp), %eax										# %eax = M[%ebp + 20] = &data[0][0]
	addl	%edx, %eax											# %eax += %edx, %eax = &data[0][0] + ind*80 = &data[ind][0]
	movl	(%eax), %eax										# %eax = M[%eax] = data[ind][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = %eax = data[ind][0], 2nd parameter for printf
	movl	$.LC4, (%esp)										# storing the address of 4th print string in stack, 1st parameter for printf
	call	printf												# printf call
	movl	20(%ebp), %eax										# %eax = M[%ebp + 20] = ind
	subl	$1, %eax											# %eax -= 1, ind - 1
	movl	%eax, 12(%esp)										# M[%esp + 12] = %eax = ind - 1, 4th parameter for po
	movl	$4, 8(%esp)											# M[%esp + 8] = 4, 3rd parameter for po
	movl	12(%ebp), %eax										# %eax = M[%ebp + 12] = &data[0][0]
	movl	%eax, 4(%esp)										# M[%esp + 4] = &data[0][0], 2nd parameter for po
	movl	8(%ebp), %eax										# %eax = M[%ebp + 8] = n
	movl	%eax, (%esp)										# M[%esp] = %eax = n, 1st parameter for po
	call	po													# po call
	nop
.L15:															# L15 label
	leave														# esp = ebp, stack frame released and pop ebp, value of ebp restored
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret															# return, pop eip
	.cfi_endproc
.LFE2:
	.size	po, .-po
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
