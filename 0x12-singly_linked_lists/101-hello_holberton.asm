section .text
	global main     ;must be declared for linker
main:               	;tells linker entry point
	mov edx, len    ;message length
	mov ecx, msg    ;message to write
	mov ebx, 1      ;file descriptor (stdout)
	mov eax, 4      ;system call number (sys_write)
	int 0x80        ;call kernel
	mov eax, 1      ;system call number (sys exit)
	int 0x80        ;call kernel

section .data
	msg db 'Hello, Holberton', 0xa     ;message
	len equ $ - msg                     ;length of string

