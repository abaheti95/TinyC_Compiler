	.file	"output.s"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$44, %esp
#; 0:res = t000 arg1 = a 
	leal	-12(%ebp), %eax
	movl	%eax, -24(%ebp)
#; 1:res = t000 
	movl	-24(%ebp), %eax
	pushl	%eax
#; 2:res = t001 arg1 = readi 
	call	readi
	movl	%eax, -24(%ebp)
#; 3:res = t002 arg1 = b 
	leal	-16(%ebp), %eax
	movl	%eax, -28(%ebp)
#; 4:res = t002 
	movl	-28(%ebp), %eax
	pushl	%eax
#; 5:res = t003 arg1 = readi 
	call	readi
	movl	%eax, -28(%ebp)
#; 6:res = t004 arg1 = a arg2 = b 
	movl	-12(%ebp), %eax
	movl	-16(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -32(%ebp)
#; 7:res = c arg1 = t004 
	movl	-32(%ebp), %eax
	movl	%eax, -20(%ebp)
#; 8:res = t005 arg1 = t004 
	movl	-32(%ebp), %eax
	movl	%eax, -36(%ebp)
#; 9:res = c 
	movl	-20(%ebp), %eax
	pushl	%eax
#; 10:res = t006 arg1 = printi 
	call	printi
	movl	%eax, -36(%ebp)
#; 11:res = t007 
	movl	$0, -40(%ebp)
#; 12:res = t007 
	movl	-40(%ebp), %eax
#; Func Epilogue
	addl	$44, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
