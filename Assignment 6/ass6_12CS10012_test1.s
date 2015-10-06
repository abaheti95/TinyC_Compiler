	.file	"output.s"
.STR0:	.string "Array Before Sorting\n"
.STR1:	.string "\n"
.STR2:	.string "Array After Sorting\n"
.STR3:	.string "\n"
	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp	
	subl	$336, %esp
#; 0:res = t000 
	movl	$10, -12(%ebp)
#; 1:res = t001 
	movl	$0, -68(%ebp)
#; 2:res = i arg1 = t001 
	movl	-68(%ebp), %eax
	movl	%eax, -56(%ebp)
#; 3:res = t002 arg1 = t001 
	movl	-68(%ebp), %eax
	movl	%eax, -72(%ebp)
#; 4:res = t003 
.L4:
	movl	$10, -76(%ebp)
#; 5:arg1 = i arg2 = t003 
	movl	-56(%ebp), %eax
	movl	-76(%ebp), %edx
	cmpl	%edx, %eax
	jl .L11
#; 6:
	jmp .L19
#; 7:
	jmp .L19
#; 8:res = t004 arg1 = i 
.L8:
	movl	-56(%ebp), %eax
	movl	%eax, -80(%ebp)
#; 9:res = i arg1 = i 
	movl	-56(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%ebp)
#; 10:
	jmp .L4
#; 11:res = t005 
.L11:
	movl	$0, -84(%ebp)
#; 12:res = t007 arg1 = i 
	movl	-56(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -92(%ebp)
#; 13:res = t006 arg1 = t005 arg2 = t007 
	movl	-84(%ebp), %eax
	movl	-92(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -88(%ebp)
#; 14:res = t008 
	movl	$10, -96(%ebp)
#; 15:res = t009 arg1 = t008 arg2 = i 
	movl	-96(%ebp), %eax
	movl	-56(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -100(%ebp)
#; 16:res = a arg1 = t006 arg2 = t009 
	leal	-52(%ebp), %edx
	addl	-88(%ebp), %edx
	movl	-100(%ebp), %eax
	movl	%eax, (%edx)
#; 17:res = t010 arg1 = t009 
	movl	-100(%ebp), %eax
	movl	%eax, -104(%ebp)
#; 18:
	jmp .L8
#; 19:
.L19:
	movl	$.STR0,	(%esp)
#; 20:res = t011 arg1 = prints 
	call	prints
	movl	%eax, -104(%ebp)
#; 21:res = t012 
	movl	$0, -108(%ebp)
#; 22:res = i arg1 = t012 
	movl	-108(%ebp), %eax
	movl	%eax, -56(%ebp)
#; 23:res = t013 arg1 = t012 
	movl	-108(%ebp), %eax
	movl	%eax, -112(%ebp)
#; 24:res = t014 
.L24:
	movl	$10, -116(%ebp)
#; 25:arg1 = i arg2 = t014 
	movl	-56(%ebp), %eax
	movl	-116(%ebp), %edx
	cmpl	%edx, %eax
	jl .L31
#; 26:
	jmp .L40
#; 27:
	jmp .L40
#; 28:res = t015 arg1 = i 
.L28:
	movl	-56(%ebp), %eax
	movl	%eax, -120(%ebp)
#; 29:res = i arg1 = i 
	movl	-56(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%ebp)
#; 30:
	jmp .L24
#; 31:res = t016 
.L31:
	movl	$0, -124(%ebp)
#; 32:res = t018 arg1 = i 
	movl	-56(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -132(%ebp)
#; 33:res = t017 arg1 = t016 arg2 = t018 
	movl	-124(%ebp), %eax
	movl	-132(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -128(%ebp)
#; 34:res = t019 arg1 = a arg2 = t017 
	leal	-52(%ebp), %edx
	addl	-128(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -136(%ebp)
#; 35:res = t019 
	movl	-136(%ebp), %eax
	pushl	%eax
#; 36:res = t020 arg1 = printi 
	call	printi
	movl	%eax, -136(%ebp)
#; 37:
	movl	$.STR1,	(%esp)
#; 38:res = t021 arg1 = prints 
	call	prints
	movl	%eax, -136(%ebp)
#; 39:
	jmp .L28
#; 40:res = t022 
.L40:
	movl	$0, -140(%ebp)
#; 41:res = i arg1 = t022 
	movl	-140(%ebp), %eax
	movl	%eax, -56(%ebp)
#; 42:res = t023 arg1 = t022 
	movl	-140(%ebp), %eax
	movl	%eax, -144(%ebp)
#; 43:res = t024 
.L43:
	movl	$9, -148(%ebp)
#; 44:arg1 = i arg2 = t024 
	movl	-56(%ebp), %eax
	movl	-148(%ebp), %edx
	cmpl	%edx, %eax
	jl .L50
#; 45:
	jmp .L101
#; 46:
	jmp .L101
#; 47:res = t025 arg1 = i 
.L47:
	movl	-56(%ebp), %eax
	movl	%eax, -152(%ebp)
#; 48:res = i arg1 = i 
	movl	-56(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%ebp)
#; 49:
	jmp .L43
#; 50:res = t026 
.L50:
	movl	$0, -156(%ebp)
#; 51:res = j arg1 = t026 
	movl	-156(%ebp), %eax
	movl	%eax, -60(%ebp)
#; 52:res = t027 arg1 = t026 
	movl	-156(%ebp), %eax
	movl	%eax, -160(%ebp)
#; 53:res = t028 
.L53:
	movl	$9, -164(%ebp)
#; 54:res = t029 arg1 = t028 arg2 = i 
	movl	-164(%ebp), %eax
	movl	-56(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -168(%ebp)
#; 55:arg1 = j arg2 = t029 
	movl	-60(%ebp), %eax
	movl	-168(%ebp), %edx
	cmpl	%edx, %eax
	jl .L61
#; 56:
	jmp .L47
#; 57:
	jmp .L100
#; 58:res = t030 arg1 = j 
.L58:
	movl	-60(%ebp), %eax
	movl	%eax, -172(%ebp)
#; 59:res = j arg1 = j 
	movl	-60(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -60(%ebp)
#; 60:
	jmp .L53
#; 61:res = t031 
.L61:
	movl	$0, -176(%ebp)
#; 62:res = t033 arg1 = j 
	movl	-60(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -184(%ebp)
#; 63:res = t032 arg1 = t031 arg2 = t033 
	movl	-176(%ebp), %eax
	movl	-184(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -180(%ebp)
#; 64:res = t034 arg1 = a arg2 = t032 
	leal	-52(%ebp), %edx
	addl	-180(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -188(%ebp)
#; 65:res = t035 
	movl	$0, -192(%ebp)
#; 66:res = t036 
	movl	$1, -196(%ebp)
#; 67:res = t037 arg1 = j arg2 = t036 
	movl	-60(%ebp), %eax
	movl	-196(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -200(%ebp)
#; 68:res = t039 arg1 = t037 
	movl	-200(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -208(%ebp)
#; 69:res = t038 arg1 = t035 arg2 = t039 
	movl	-192(%ebp), %eax
	movl	-208(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -204(%ebp)
#; 70:res = t040 arg1 = a arg2 = t038 
	leal	-52(%ebp), %edx
	addl	-204(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -212(%ebp)
#; 71:arg1 = t034 arg2 = t040 
	movl	-188(%ebp), %eax
	movl	-212(%ebp), %edx
	cmpl	%edx, %eax
	jg .L74
#; 72:
	jmp .L58
#; 73:
	jmp .L99
#; 74:res = t041 
.L74:
	movl	$0, -216(%ebp)
#; 75:res = t043 arg1 = j 
	movl	-60(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -224(%ebp)
#; 76:res = t042 arg1 = t041 arg2 = t043 
	movl	-216(%ebp), %eax
	movl	-224(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -220(%ebp)
#; 77:res = t044 arg1 = a arg2 = t042 
	leal	-52(%ebp), %edx
	addl	-220(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -228(%ebp)
#; 78:res = temp arg1 = t044 
	movl	-228(%ebp), %eax
	movl	%eax, -64(%ebp)
#; 79:res = t045 arg1 = t044 
	movl	-228(%ebp), %eax
	movl	%eax, -232(%ebp)
#; 80:res = t046 
	movl	$0, -236(%ebp)
#; 81:res = t048 arg1 = j 
	movl	-60(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -244(%ebp)
#; 82:res = t047 arg1 = t046 arg2 = t048 
	movl	-236(%ebp), %eax
	movl	-244(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -240(%ebp)
#; 83:res = t049 
	movl	$0, -248(%ebp)
#; 84:res = t050 
	movl	$1, -252(%ebp)
#; 85:res = t051 arg1 = j arg2 = t050 
	movl	-60(%ebp), %eax
	movl	-252(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -256(%ebp)
#; 86:res = t053 arg1 = t051 
	movl	-256(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -264(%ebp)
#; 87:res = t052 arg1 = t049 arg2 = t053 
	movl	-248(%ebp), %eax
	movl	-264(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -260(%ebp)
#; 88:res = t054 arg1 = a arg2 = t052 
	leal	-52(%ebp), %edx
	addl	-260(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -268(%ebp)
#; 89:res = a arg1 = t047 arg2 = t054 
	leal	-52(%ebp), %edx
	addl	-240(%ebp), %edx
	movl	-268(%ebp), %eax
	movl	%eax, (%edx)
#; 90:res = t055 arg1 = t054 
	movl	-268(%ebp), %eax
	movl	%eax, -272(%ebp)
#; 91:res = t056 
	movl	$0, -276(%ebp)
#; 92:res = t057 
	movl	$1, -280(%ebp)
#; 93:res = t058 arg1 = j arg2 = t057 
	movl	-60(%ebp), %eax
	movl	-280(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -284(%ebp)
#; 94:res = t060 arg1 = t058 
	movl	-284(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -292(%ebp)
#; 95:res = t059 arg1 = t056 arg2 = t060 
	movl	-276(%ebp), %eax
	movl	-292(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -288(%ebp)
#; 96:res = a arg1 = t059 arg2 = temp 
	leal	-52(%ebp), %edx
	addl	-288(%ebp), %edx
	movl	-64(%ebp), %eax
	movl	%eax, (%edx)
#; 97:res = t061 arg1 = temp 
	movl	-64(%ebp), %eax
	movl	%eax, -296(%ebp)
#; 98:
	jmp .L58
#; 99:
.L99:
	jmp .L58
#; 100:
.L100:
	jmp .L47
#; 101:
.L101:
	movl	$.STR2,	(%esp)
#; 102:res = t062 arg1 = prints 
	call	prints
	movl	%eax, -296(%ebp)
#; 103:res = t063 
	movl	$0, -300(%ebp)
#; 104:res = i arg1 = t063 
	movl	-300(%ebp), %eax
	movl	%eax, -56(%ebp)
#; 105:res = t064 arg1 = t063 
	movl	-300(%ebp), %eax
	movl	%eax, -304(%ebp)
#; 106:res = t065 
.L106:
	movl	$10, -308(%ebp)
#; 107:arg1 = i arg2 = t065 
	movl	-56(%ebp), %eax
	movl	-308(%ebp), %edx
	cmpl	%edx, %eax
	jl .L113
#; 108:
	jmp .L122
#; 109:
	jmp .L122
#; 110:res = t066 arg1 = i 
.L110:
	movl	-56(%ebp), %eax
	movl	%eax, -312(%ebp)
#; 111:res = i arg1 = i 
	movl	-56(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%ebp)
#; 112:
	jmp .L106
#; 113:res = t067 
.L113:
	movl	$0, -316(%ebp)
#; 114:res = t069 arg1 = i 
	movl	-56(%ebp), %eax
	movl	$4, %ecx
	imull	%ecx
	movl	%eax, -324(%ebp)
#; 115:res = t068 arg1 = t067 arg2 = t069 
	movl	-316(%ebp), %eax
	movl	-324(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -320(%ebp)
#; 116:res = t070 arg1 = a arg2 = t068 
	leal	-52(%ebp), %edx
	addl	-320(%ebp), %edx
	movl	(%edx), %eax
	movl	%eax, -328(%ebp)
#; 117:res = t070 
	movl	-328(%ebp), %eax
	pushl	%eax
#; 118:res = t071 arg1 = printi 
	call	printi
	movl	%eax, -328(%ebp)
#; 119:
	movl	$.STR3,	(%esp)
#; 120:res = t072 arg1 = prints 
	call	prints
	movl	%eax, -328(%ebp)
#; 121:
	jmp .L110
#; 122:res = t073 
.L122:
	movl	$0, -332(%ebp)
#; 123:res = t073 
	movl	-332(%ebp), %eax
#; Func Epilogue
	addl	$336, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret
#; Func End
