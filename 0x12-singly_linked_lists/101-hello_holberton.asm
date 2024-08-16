section .data
output db "Hello, Holberton", 0x0A;

section .text
global _start;

_start:
	mov rax, 1;
	mov rdi, 1;
	mov rsi, output;
	mov rdx, 17;
	syscall;

	mov rax, 60;
	xor rdi, rdi;
	syscall;
