	.file	"test.c"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	movl	$1998615411, 31(%esp)
	movl	$1717969015, 35(%esp)
	movb	$0, 39(%esp)
	leal	31(%esp), %eax
	movl	%eax, 40(%esp)
	leal	31(%esp), %eax
	movl	%eax, 44(%esp)
	jmp	.L2
.L4:
	movl	44(%esp), %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	jne	.L3
	addl	$1, 44(%esp)
	jmp	.L2
.L3:
	movl	44(%esp), %eax
	movzbl	(%eax), %edx
	movl	40(%esp), %eax
	movb	%dl, (%eax)
	addl	$1, 40(%esp)
	addl	$1, 44(%esp)
.L2:
	movl	44(%esp), %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	.L4
	movl	40(%esp), %eax
	movb	$0, (%eax)
	leal	31(%esp), %eax
	movl	%eax, (%esp)
	call	puts
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
