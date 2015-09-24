	.file	"c0802_main.cpp"
	.globl	i
	.section	.rodata
	.align 4
	.type	i, @object
	.size	i, 4
i:
	.long	100
	.globl	j
	.bss
	.align 32
	.type	j, @object
	.size	j, 400
j:
	.zero	400
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
