	section .data                   ;
	msg db "Hello, Holberton", 10	;
	len equ $ - msg			;

	section .text		;
	global main		;

main:				;
	mov rax, 1      	;
	mov rdi, 1      ;
	mov rsi, msg    ;
	mov rdx, len      ;
	int 0x80	;

	mov rax, 60     ;
	mov rdi, 0	;
	int 0x80      ;
