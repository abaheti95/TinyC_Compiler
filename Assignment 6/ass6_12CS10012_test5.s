	.file	"output.s"
.STR0:	.string "Before\n"
.STR1:	.string "\nAfter\n"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$48, %esp
#; 0:res = t000 
	movl	$10, -20(%ebp)
#; 1:res = b arg1 = t000 
	movl	-20(%ebp), %eax
	movl	%eax, -16(%ebp)
#; 2:res = t001 arg1 = t000 
	movl	-20(%ebp), %eax
	movl	%eax, -24(%ebp)
#; 3:
	movl	$.STR0,	(%esp)
#; 4:res = t002 arg1 = prints 
	call	prints
	movl	%eax, -24(%ebp)
#; 5:res = b 
	movl	-16(%ebp), %eax
	pushl	%eax
#; 6:res = t003 arg1 = printi 
	call	printi
	movl	%eax, -24(%ebp)
#; 7:res = t004 arg1 = b 
	leal	-16(%ebp), %eax
	movl	%eax, -28(%ebp)
#; 8:res = a arg1 = t004 
	movl	-28(%ebp), %eax
	movl	%eax, -12(%ebp)
#; 9:res = t005 arg1 = t004 
	movl	-28(%ebp), %eax
	movl	%eax, -32(%ebp)
#; 10:res = t006 
	movl	$5, -36(%ebp)
#; 11:res = a arg1 = t006 
	movl	-36(%ebp), %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
#; 12:res = t007 arg1 = t006 
	movl	-36(%ebp), %eax
	movl	%eax, -40(%ebp)
#; 13:
	movl	$.STR1,	(%esp)
#; 14:res = t008 arg1 = prints 
	call	prints
	movl	%eax, -40(%ebp)
#; 15:res = b 
	movl	-16(%ebp), %eax
	pushl	%eax
#; 16:res = t009 arg1 = printi 
	call	printi
	movl	%eax, -40(%ebp)
#; 17:res = t010 
	movl	$0, -44(%ebp)
#; 18:res = t010 
	movl	-44(%ebp), %eax
#; Func Epilogue
	addl	$48, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
