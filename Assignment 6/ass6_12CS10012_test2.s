	.file	"output.s"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$28, %esp
#; 16:res = t008 arg1 = a 
	leal	-12(%ebp), %eax
	movl	%eax, -16(%ebp)
#; 17:res = t008 
	movl	-16(%ebp), %eax
	pushl	%eax
#; 18:res = t009 arg1 = readi 
	call	readi
	movl	%eax, -16(%ebp)
#; 19:res = a 
	movl	-12(%ebp), %eax
	pushl	%eax
#; 20:res = t010 
	call	fibonacci
	movl	%eax, -20(%ebp)
#; 21:res = t010 
	movl	-20(%ebp), %eax
	pushl	%eax
#; 22:res = t011 arg1 = printi 
	call	printi
	movl	%eax, -20(%ebp)
#; 23:res = t012 
	movl	$0, -24(%ebp)
#; 24:res = t012 
	movl	-24(%ebp), %eax
#; Func Epilogue
	addl	$28, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
	.text
	.globl	fibonacci
	.type	fibonacci, @function
fibonacci:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$44, %esp
#; 0:res = t000 
	movl	$1, -12(%ebp)
#; 1:arg1 = n arg2 = t000 
	movl	8(%ebp), %eax
	movl	-12(%ebp), %edx
	cmpl	%edx, %eax
	jle .L4
#; 2:
	jmp .L6
#; 3:
	jmp .L6
#; 4:res = n 
.L4:
	movl	8(%ebp), %eax
#; Func Epilogue
	addl	$44, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
#; 5:
	jmp .L6
#; 6:res = t001 
.L6:
	movl	$1, -16(%ebp)
#; 7:res = t002 arg1 = n arg2 = t001 
	movl	8(%ebp), %eax
	movl	-16(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -20(%ebp)
#; 8:res = t002 
	movl	-20(%ebp), %eax
	pushl	%eax
#; 9:res = t003 
	call	fibonacci
	movl	%eax, -24(%ebp)
#; 10:res = t004 
	movl	$2, -28(%ebp)
#; 11:res = t005 arg1 = n arg2 = t004 
	movl	8(%ebp), %eax
	movl	-28(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -32(%ebp)
#; 12:res = t005 
	movl	-32(%ebp), %eax
	pushl	%eax
#; 13:res = t006 
	call	fibonacci
	movl	%eax, -36(%ebp)
#; 14:res = t007 arg1 = t003 arg2 = t006 
	movl	-24(%ebp), %eax
	movl	-36(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -40(%ebp)
#; 15:res = t007 
	movl	-40(%ebp), %eax
#; Func Epilogue
	addl	$44, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
