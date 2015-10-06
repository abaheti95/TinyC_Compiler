	.file	"output.s"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$38, %esp
#; 0:res = t000 
	movl	$0, -18(%ebp)
#; 1:res = c arg1 = t000 
	movl	-18(%ebp), %eax
	movl	%eax, -14(%ebp)
#; 2:res = t001 
	movb	$49, -19(%ebp)
#; 3:res = a arg1 = t001 
	movzbl	-19(%ebp), %eax
	movb	%al, -9(%ebp)
#; 4:res = t002 arg1 = t001 
	movzbl	-19(%ebp), %eax
	movb	%al, -20(%ebp)
#; 5:res = t003 
	movb	$65, -21(%ebp)
#; 6:res = b arg1 = t003 
	movzbl	-21(%ebp), %eax
	movb	%al, -10(%ebp)
#; 7:res = t004 arg1 = t003 
	movzbl	-21(%ebp), %eax
	movb	%al, -22(%ebp)
#; 8:arg1 = a arg2 = b 
	movzbl	-9(%ebp), %eax
	cmpb	-10(%ebp), %al
	jg .L11
#; 9:
	jmp .L14
#; 10:
	jmp .L17
#; 11:res = t005 arg1 = c 
.L11:
	movl	-14(%ebp), %eax
	movl	%eax, -26(%ebp)
#; 12:res = c arg1 = c 
	movl	-14(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -14(%ebp)
#; 13:
	jmp .L17
#; 14:res = t006 arg1 = c 
.L14:
	movl	-14(%ebp), %eax
	movl	%eax, -30(%ebp)
#; 15:res = c arg1 = c 
	movl	-14(%ebp), %eax
	movl	$1, %edx
	subl	%edx, %eax
	movl	%eax, -14(%ebp)
#; 16:
	jmp .L17
#; 17:res = c 
.L17:
	movl	-14(%ebp), %eax
	pushl	%eax
#; 18:res = t007 arg1 = printi 
	call	printi
	movl	%eax, -30(%ebp)
#; 19:res = t008 
	movl	$0, -34(%ebp)
#; 20:res = t008 
	movl	-34(%ebp), %eax
#; Func Epilogue
	addl	$38, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
