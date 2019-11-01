	section .data                   ;
	msg db "Hello, Holberton", 0xa	;
	len equ $-msg			;

	section .text		;
	global main		;

main:				;
	mov edx, len      	;
	mov ecx, msg      ;
	mov ebx, 1    ;
	mov eax, 4      ;
	syscall	;

	mov eax,1     ;
	syscall      ;
