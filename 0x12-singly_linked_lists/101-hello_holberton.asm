extern	printf

section .text
   global main

main:
	push	rbp
	mov	rdi, fmt
	mov	rsi, msg
	call	printf
	mov	rax,0

	pop rbp

	mov rax,0
	ret

section .data
   msg: db "Hello, Holberton",0
   fmt: db "%s", 10, 0
