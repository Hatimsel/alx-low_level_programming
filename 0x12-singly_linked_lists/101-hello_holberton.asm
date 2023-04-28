section .data
	msg db "Hello, Holberton", 10

section .text
	global main
	extern printf

	main:
	push msg
	mov rdi, format
	xor eax, eax
	call printf
	add rsp, 8
	xor eax, eax
	ret

	section .rodata
    		format db "%s", 10, 0
