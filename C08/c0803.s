	.file	"c0803.cpp"
	.globl	array
	.bss
	.align 4
	.type	array, @object
	.size	array, 8
array:
	.zero	8
	.section	.rodata
	.align 4
	.type	_ZL1i, @object
	.size	_ZL1i, 4
_ZL1i:
	.long	1
	.align 4
	.type	_ZL1f, @object
	.size	_ZL1f, 4
_ZL1f:
	.long	1065353216
	.align 8
	.type	_ZL1d, @object
	.size	_ZL1d, 8
_ZL1d:
	.long	2684354560
	.long	1072798105
	.type	_ZL1a, @object
	.size	_ZL1a, 1
_ZL1a:
	.byte	97
	.align 8
	.type	_ZL1l, @object
	.size	_ZL1l, 8
_ZL1l:
	.quad	1
	.align 4
	.type	_ZL2ui, @object
	.size	_ZL2ui, 4
_ZL2ui:
	.long	1
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
