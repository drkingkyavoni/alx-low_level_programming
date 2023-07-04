section .data
    msg db "Hello, Holberton", 10 	;Note the newline at the end

section .text
global main

main:
    ; Write system call
    mov eax, 1        ; System call number for write
    mov edi, 1        ; File handle 1 is stdout
    mov rsi, msg      ; Address of string to output
    mov edx, msg_len  ; Number of bytes
    syscall           ; Invoke operating system to perform the write

    ; Exit system call
    mov eax, 60       ; System call number for exit
    xor edi, edi      ; Exit code 0
    syscall           ; Invoke operating system to exit

section .data
    msg_len equ $ - msg  ; Length of the message

