	.file	"main.c"
	.comm	_agenda, 134400, 5
	.globl	_totalPessoas
	.bss
	.align 4
_totalPessoas:
	.space 4
	.section .rdata,"dr"
LC0:
	.ascii "Agenda cheia.\0"
LC1:
	.ascii "Nome: \0"
LC2:
	.ascii " %[^\12]\0"
LC3:
	.ascii "E-mail: \0"
LC4:
	.ascii "Endereco:\0"
LC5:
	.ascii "  Rua: \0"
LC6:
	.ascii "  Numero: \0"
LC7:
	.ascii "%d\0"
LC8:
	.ascii "  Complemento: \0"
LC9:
	.ascii "  Bairro: \0"
LC10:
	.ascii "  CEP: \0"
LC11:
	.ascii "  Cidade: \0"
LC12:
	.ascii "  Estado: \0"
LC13:
	.ascii "  Pais: \0"
LC14:
	.ascii "Telefone:\0"
LC15:
	.ascii "  DDD: \0"
LC16:
	.ascii "Data de aniversario:\0"
LC17:
	.ascii "  Dia: \0"
LC18:
	.ascii "  Mes: \0"
LC19:
	.ascii "  Ano: \0"
LC20:
	.ascii "Observacoes: \0"
	.align 4
LC21:
	.ascii "Pessoa adicionada com sucesso.\0"
	.text
	.globl	_inserirPessoa
	.def	_inserirPessoa;	.scl	2;	.type	32;	.endef
_inserirPessoa:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$1388, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	_totalPessoas, %eax
	cmpl	$99, %eax
	jle	L2
	movl	$LC0, (%esp)
	call	_puts
	jmp	L1
L2:
	movl	$LC1, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC3, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$30, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC4, (%esp)
	call	_puts
	movl	$LC5, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$60, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC6, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$260, %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	$LC8, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$264, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC9, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$464, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC10, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$664, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC11, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$679, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC12, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$879, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC13, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1079, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC14, (%esp)
	call	_puts
	movl	$LC15, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1112, %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	$LC6, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1116, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$LC16, (%esp)
	call	_puts
	movl	$LC17, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1132, %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	$LC18, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1136, %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	$LC19, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1140, %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	$LC20, (%esp)
	call	_printf
	leal	-1376(%ebp), %eax
	addl	$1144, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	$0, -28(%ebp)
	jmp	L4
L7:
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, 4(%esp)
	leal	-1376(%ebp), %eax
	movl	%eax, (%esp)
	call	_strcmp
	testl	%eax, %eax
	js	L10
	addl	$1, -28(%ebp)
L4:
	movl	_totalPessoas, %eax
	cmpl	%eax, -28(%ebp)
	jl	L7
	jmp	L6
L10:
	nop
L6:
	movl	_totalPessoas, %eax
	movl	%eax, -32(%ebp)
	jmp	L8
L9:
	movl	-32(%ebp), %eax
	leal	-1(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	leal	_agenda(%eax), %edx
	imull	$1344, %ecx, %eax
	addl	$_agenda, %eax
	movl	%eax, %ebx
	movl	$336, %eax
	movl	%edx, %edi
	movl	%ebx, %esi
	movl	%eax, %ecx
	rep movsl
	subl	$1, -32(%ebp)
L8:
	movl	-32(%ebp), %eax
	cmpl	-28(%ebp), %eax
	jg	L9
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, %ebx
	leal	-1376(%ebp), %eax
	movl	$336, %edx
	movl	%ebx, %edi
	movl	%eax, %esi
	movl	%edx, %ecx
	rep movsl
	movl	_totalPessoas, %eax
	addl	$1, %eax
	movl	%eax, _totalPessoas
	movl	$LC21, (%esp)
	call	_puts
L1:
	addl	$1388, %esp
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
LFE17:
	.section .rdata,"dr"
LC22:
	.ascii "\12Nome: %s\12\0"
LC23:
	.ascii "E-mail: %s\12\0"
	.align 4
LC24:
	.ascii "Endereco: %s, %d, %s, %s, %s, %s, %s, %s\12\0"
LC25:
	.ascii "Telefone: (%d) %s\12\0"
LC26:
	.ascii "Aniversario: %02d/%02d/%04d\12\0"
LC27:
	.ascii "Observacoes: %s\12\0"
	.align 4
LC28:
	.ascii "Nenhuma pessoa encontrada com o nome %s.\12\0"
	.text
	.globl	_buscarPorNome
	.def	_buscarPorNome;	.scl	2;	.type	32;	.endef
_buscarPorNome:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$92, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	$0, -28(%ebp)
	movl	$0, -32(%ebp)
	jmp	L12
L14:
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	leal	_agenda(%eax), %edx
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_strstr
	testl	%eax, %eax
	je	L13
	movl	$1, -28(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, 4(%esp)
	movl	$LC22, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$16, %eax
	addl	$_agenda, %eax
	addl	$14, %eax
	movl	%eax, 4(%esp)
	movl	$LC23, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1056, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$864, %eax
	addl	$_agenda, %eax
	addl	$15, %eax
	movl	%eax, -44(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$656, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ebx
	movl	%ebx, -48(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$640, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %edi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$448, %eax
	addl	$_agenda, %eax
	leal	16(%eax), %esi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$240, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %ebx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+260, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$48, %eax
	addl	$_agenda, %eax
	addl	$12, %eax
	movl	%ecx, 32(%esp)
	movl	-44(%ebp), %ecx
	movl	%ecx, 28(%esp)
	movl	-48(%ebp), %ecx
	movl	%ecx, 24(%esp)
	movl	%edi, 20(%esp)
	movl	%esi, 16(%esp)
	movl	%ebx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC24, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1104, %eax
	addl	$_agenda, %eax
	leal	12(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1112, %eax
	movl	(%eax), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC25, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1140, %eax
	movl	(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1132, %eax
	movl	(%eax), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC26, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1136, %eax
	addl	$_agenda, %eax
	addl	$8, %eax
	movl	%eax, 4(%esp)
	movl	$LC27, (%esp)
	call	_printf
L13:
	addl	$1, -32(%ebp)
L12:
	movl	_totalPessoas, %eax
	cmpl	%eax, -32(%ebp)
	jl	L14
	cmpl	$0, -28(%ebp)
	jne	L16
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC28, (%esp)
	call	_printf
L16:
	nop
	addl	$92, %esp
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
LFE18:
	.section .rdata,"dr"
	.align 4
LC29:
	.ascii "Nenhuma pessoa encontrada com aniversario no mes %d.\12\0"
	.text
	.globl	_buscarPorMesAniversario
	.def	_buscarPorMesAniversario;	.scl	2;	.type	32;	.endef
_buscarPorMesAniversario:
LFB19:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$92, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	$0, -28(%ebp)
	movl	$0, -32(%ebp)
	jmp	L18
L20:
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %eax
	cmpl	8(%ebp), %eax
	jne	L19
	movl	$1, -28(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, 4(%esp)
	movl	$LC22, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$16, %eax
	addl	$_agenda, %eax
	addl	$14, %eax
	movl	%eax, 4(%esp)
	movl	$LC23, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1056, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$864, %eax
	addl	$_agenda, %eax
	addl	$15, %eax
	movl	%eax, -44(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$656, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ebx
	movl	%ebx, -48(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$640, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %edi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$448, %eax
	addl	$_agenda, %eax
	leal	16(%eax), %esi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$240, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %ebx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+260, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$48, %eax
	addl	$_agenda, %eax
	addl	$12, %eax
	movl	%ecx, 32(%esp)
	movl	-44(%ebp), %ecx
	movl	%ecx, 28(%esp)
	movl	-48(%ebp), %ecx
	movl	%ecx, 24(%esp)
	movl	%edi, 20(%esp)
	movl	%esi, 16(%esp)
	movl	%ebx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC24, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1104, %eax
	addl	$_agenda, %eax
	leal	12(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1112, %eax
	movl	(%eax), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC25, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1140, %eax
	movl	(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1132, %eax
	movl	(%eax), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC26, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1136, %eax
	addl	$_agenda, %eax
	addl	$8, %eax
	movl	%eax, 4(%esp)
	movl	$LC27, (%esp)
	call	_printf
L19:
	addl	$1, -32(%ebp)
L18:
	movl	_totalPessoas, %eax
	cmpl	%eax, -32(%ebp)
	jl	L20
	cmpl	$0, -28(%ebp)
	jne	L22
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC29, (%esp)
	call	_printf
L22:
	nop
	addl	$92, %esp
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
LFE19:
	.section .rdata,"dr"
	.align 4
LC30:
	.ascii "Nenhuma pessoa encontrada com aniversario em %02d/%02d.\12\0"
	.text
	.globl	_buscarPorDiaMesAniversario
	.def	_buscarPorDiaMesAniversario;	.scl	2;	.type	32;	.endef
_buscarPorDiaMesAniversario:
LFB20:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$92, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	$0, -28(%ebp)
	movl	$0, -32(%ebp)
	jmp	L24
L26:
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1132, %eax
	movl	(%eax), %eax
	cmpl	8(%ebp), %eax
	jne	L25
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %eax
	cmpl	12(%ebp), %eax
	jne	L25
	movl	$1, -28(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, 4(%esp)
	movl	$LC22, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$16, %eax
	addl	$_agenda, %eax
	addl	$14, %eax
	movl	%eax, 4(%esp)
	movl	$LC23, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1056, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$864, %eax
	addl	$_agenda, %eax
	addl	$15, %eax
	movl	%eax, -44(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$656, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ebx
	movl	%ebx, -48(%ebp)
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$640, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %edi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$448, %eax
	addl	$_agenda, %eax
	leal	16(%eax), %esi
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$240, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %ebx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+260, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$48, %eax
	addl	$_agenda, %eax
	addl	$12, %eax
	movl	%ecx, 32(%esp)
	movl	-44(%ebp), %ecx
	movl	%ecx, 28(%esp)
	movl	-48(%ebp), %ecx
	movl	%ecx, 24(%esp)
	movl	%edi, 20(%esp)
	movl	%esi, 16(%esp)
	movl	%ebx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC24, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1104, %eax
	addl	$_agenda, %eax
	leal	12(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1112, %eax
	movl	(%eax), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC25, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1140, %eax
	movl	(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %edx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1132, %eax
	movl	(%eax), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC26, (%esp)
	call	_printf
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1136, %eax
	addl	$_agenda, %eax
	addl	$8, %eax
	movl	%eax, 4(%esp)
	movl	$LC27, (%esp)
	call	_printf
L25:
	addl	$1, -32(%ebp)
L24:
	movl	_totalPessoas, %eax
	cmpl	%eax, -32(%ebp)
	jl	L26
	cmpl	$0, -28(%ebp)
	jne	L28
	movl	12(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC30, (%esp)
	call	_printf
L28:
	nop
	addl	$92, %esp
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
LFE20:
	.section .rdata,"dr"
LC31:
	.ascii "Pessoa removida com sucesso.\0"
	.align 4
LC32:
	.ascii "Pessoa com o nome %s nao encontrada.\12\0"
	.text
	.globl	_removerPessoa
	.def	_removerPessoa;	.scl	2;	.type	32;	.endef
_removerPessoa:
LFB21:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$44, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	$0, -36(%ebp)
	movl	$0, -28(%ebp)
	jmp	L30
L34:
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	leal	_agenda(%eax), %edx
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_strcmp
	testl	%eax, %eax
	jne	L31
	movl	$1, -36(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -32(%ebp)
	jmp	L32
L33:
	movl	-32(%ebp), %eax
	leal	1(%eax), %ecx
	movl	-32(%ebp), %eax
	imull	$1344, %eax, %eax
	leal	_agenda(%eax), %edx
	imull	$1344, %ecx, %eax
	addl	$_agenda, %eax
	movl	%eax, %ebx
	movl	$336, %eax
	movl	%edx, %edi
	movl	%ebx, %esi
	movl	%eax, %ecx
	rep movsl
	addl	$1, -32(%ebp)
L32:
	movl	_totalPessoas, %eax
	subl	$1, %eax
	cmpl	-32(%ebp), %eax
	jg	L33
	movl	_totalPessoas, %eax
	subl	$1, %eax
	movl	%eax, _totalPessoas
	subl	$1, -28(%ebp)
L31:
	addl	$1, -28(%ebp)
L30:
	movl	_totalPessoas, %eax
	cmpl	%eax, -28(%ebp)
	jl	L34
	cmpl	$0, -36(%ebp)
	je	L35
	movl	$LC31, (%esp)
	call	_puts
	jmp	L37
L35:
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC32, (%esp)
	call	_printf
L37:
	nop
	addl	$44, %esp
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
LFE21:
	.section .rdata,"dr"
	.align 4
LC33:
	.ascii "Nome: %s, Telefone: (%d) %s, E-mail: %s\12\0"
	.text
	.globl	_imprimirAgenda
	.def	_imprimirAgenda;	.scl	2;	.type	32;	.endef
_imprimirAgenda:
LFB22:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$92, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	$0, -28(%ebp)
	jmp	L39
L42:
	cmpl	$1, 8(%ebp)
	jne	L40
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$16, %eax
	addl	$_agenda, %eax
	leal	14(%eax), %ebx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1104, %eax
	addl	$_agenda, %eax
	leal	12(%eax), %ecx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1112, %eax
	movl	(%eax), %eax
	movl	-28(%ebp), %edx
	imull	$1344, %edx, %edx
	addl	$_agenda, %edx
	movl	%ebx, 16(%esp)
	movl	%ecx, 12(%esp)
	movl	%eax, 8(%esp)
	movl	%edx, 4(%esp)
	movl	$LC33, (%esp)
	call	_printf
	jmp	L41
L40:
	cmpl	$2, 8(%ebp)
	jne	L41
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda, %eax
	movl	%eax, 4(%esp)
	movl	$LC22, (%esp)
	call	_printf
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$16, %eax
	addl	$_agenda, %eax
	addl	$14, %eax
	movl	%eax, 4(%esp)
	movl	$LC23, (%esp)
	call	_printf
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1056, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %ecx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$864, %eax
	addl	$_agenda, %eax
	addl	$15, %eax
	movl	%eax, -44(%ebp)
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$656, %eax
	addl	$_agenda, %eax
	leal	23(%eax), %esi
	movl	%esi, -48(%ebp)
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$640, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %edi
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$448, %eax
	addl	$_agenda, %eax
	leal	16(%eax), %esi
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$240, %eax
	addl	$_agenda, %eax
	leal	24(%eax), %ebx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+260, %eax
	movl	(%eax), %edx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$48, %eax
	addl	$_agenda, %eax
	addl	$12, %eax
	movl	%ecx, 32(%esp)
	movl	-44(%ebp), %ecx
	movl	%ecx, 28(%esp)
	movl	-48(%ebp), %ecx
	movl	%ecx, 24(%esp)
	movl	%edi, 20(%esp)
	movl	%esi, 16(%esp)
	movl	%ebx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC24, (%esp)
	call	_printf
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1104, %eax
	addl	$_agenda, %eax
	leal	12(%eax), %edx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1112, %eax
	movl	(%eax), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC25, (%esp)
	call	_printf
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1140, %eax
	movl	(%eax), %ecx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1136, %eax
	movl	(%eax), %edx
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$_agenda+1132, %eax
	movl	(%eax), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC26, (%esp)
	call	_printf
	movl	-28(%ebp), %eax
	imull	$1344, %eax, %eax
	addl	$1136, %eax
	addl	$_agenda, %eax
	addl	$8, %eax
	movl	%eax, 4(%esp)
	movl	$LC27, (%esp)
	call	_printf
L41:
	addl	$1, -28(%ebp)
L39:
	movl	_totalPessoas, %eax
	cmpl	%eax, -28(%ebp)
	jl	L42
	nop
	addl	$92, %esp
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
LFE22:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC34:
	.ascii "\12Menu:\0"
LC35:
	.ascii "1. Inserir pessoa\0"
LC36:
	.ascii "2. Buscar por primeiro nome\0"
	.align 4
LC37:
	.ascii "3. Buscar por mes de aniversario\0"
	.align 4
LC38:
	.ascii "4. Buscar por dia e mes de aniversario\0"
LC39:
	.ascii "5. Remover pessoa\0"
	.align 4
LC40:
	.ascii "6. Imprimir agenda (nome, telefone e e-mail)\0"
	.align 4
LC41:
	.ascii "7. Imprimir agenda (todos os dados)\0"
LC42:
	.ascii "8. Sair\0"
LC43:
	.ascii "Escolha uma opcao: \0"
LC44:
	.ascii "Digite o nome para buscar: \0"
LC45:
	.ascii "Digite o mes para buscar: \0"
	.align 4
LC46:
	.ascii "Digite o dia e o mes para buscar: \0"
LC47:
	.ascii "%d %d\0"
LC48:
	.ascii "Digite o nome para remover: \0"
LC49:
	.ascii "Saindo...\0"
	.align 4
LC50:
	.ascii "Opcao invalida. Tente novamente.\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB23:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
L55:
	movl	$LC34, (%esp)
	call	_puts
	movl	$LC35, (%esp)
	call	_puts
	movl	$LC36, (%esp)
	call	_puts
	movl	$LC37, (%esp)
	call	_puts
	movl	$LC38, (%esp)
	call	_puts
	movl	$LC39, (%esp)
	call	_puts
	movl	$LC40, (%esp)
	call	_puts
	movl	$LC41, (%esp)
	call	_puts
	movl	$LC42, (%esp)
	call	_puts
	movl	$LC43, (%esp)
	call	_printf
	leal	60(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	60(%esp), %eax
	cmpl	$8, %eax
	ja	L44
	movl	L46(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L46:
	.long	L44
	.long	L45
	.long	L47
	.long	L48
	.long	L49
	.long	L50
	.long	L51
	.long	L52
	.long	L53
	.text
L45:
	call	_inserirPessoa
	jmp	L54
L47:
	movl	$LC44, (%esp)
	call	_printf
	leal	30(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	leal	30(%esp), %eax
	movl	%eax, (%esp)
	call	_buscarPorNome
	jmp	L54
L48:
	movl	$LC45, (%esp)
	call	_printf
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_scanf
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_buscarPorMesAniversario
	jmp	L54
L49:
	movl	$LC46, (%esp)
	call	_printf
	leal	24(%esp), %eax
	movl	%eax, 8(%esp)
	leal	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC47, (%esp)
	call	_scanf
	movl	24(%esp), %edx
	movl	20(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_buscarPorDiaMesAniversario
	jmp	L54
L50:
	movl	$LC48, (%esp)
	call	_printf
	leal	30(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	leal	30(%esp), %eax
	movl	%eax, (%esp)
	call	_removerPessoa
	jmp	L54
L51:
	movl	$1, (%esp)
	call	_imprimirAgenda
	jmp	L54
L52:
	movl	$2, (%esp)
	call	_imprimirAgenda
	jmp	L54
L53:
	movl	$LC49, (%esp)
	call	_puts
	jmp	L54
L44:
	movl	$LC50, (%esp)
	call	_puts
L54:
	movl	60(%esp), %eax
	cmpl	$8, %eax
	jne	L55
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE23:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_strcmp;	.scl	2;	.type	32;	.endef
	.def	_strstr;	.scl	2;	.type	32;	.endef
