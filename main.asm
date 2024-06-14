	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Horario: %02d:%02d:%02d\12\0"
LC1:
	.ascii "Data: %02d/%02d/%04d\12\0"
	.align 4
LC2:
	.ascii "Compromisso: %s, marcado para %02d/%02d/%04d, as %02d:%02d:%02d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$192, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	call	___main
	movl	$10, 180(%esp)
	movl	$30, 184(%esp)
	movl	$0, 188(%esp)
	movl	188(%esp), %ecx
	movl	184(%esp), %edx
	movl	180(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$1, 168(%esp)
	movl	$6, 172(%esp)
	movl	$2024, 176(%esp)
	movl	176(%esp), %ecx
	movl	172(%esp), %edx
	movl	168(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	168(%esp), %eax
	movl	%eax, 44(%esp)
	movl	172(%esp), %eax
	movl	%eax, 48(%esp)
	movl	176(%esp), %eax
	movl	%eax, 52(%esp)
	movl	180(%esp), %eax
	movl	%eax, 56(%esp)
	movl	184(%esp), %eax
	movl	%eax, 60(%esp)
	movl	188(%esp), %eax
	movl	%eax, 64(%esp)
	movl	$1853187410, 68(%esp)
	movl	$544170345, 72(%esp)
	movl	$544042851, 76(%esp)
	movl	$1902452833, 80(%esp)
	movl	$1701865845, 84(%esp)
	movl	$0, 88(%esp)
	leal	92(%esp), %edx
	movl	$0, %eax
	movl	$19, %ecx
	movl	%edx, %edi
	rep stosl
	movl	64(%esp), %edi
	movl	60(%esp), %esi
	movl	56(%esp), %ebx
	movl	52(%esp), %ecx
	movl	48(%esp), %edx
	movl	44(%esp), %eax
	movl	%edi, 28(%esp)
	movl	%esi, 24(%esp)
	movl	%ebx, 20(%esp)
	movl	%ecx, 16(%esp)
	movl	%edx, 12(%esp)
	movl	%eax, 8(%esp)
	leal	44(%esp), %eax
	addl	$24, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
