	section .data                   ;
	msg db "Hello, Holberton", 10	;
	len equ $ - msg			;

	section .text		;
	global main		;

main:				;
	mov edx, len      	;
	mov ecx, msg      ;
	mov ebx, 1    ;
	mov eax, 4      ;
	syscall	;

	mov eax,     ;
	mov rdi, 0	;
	syscall      ;
