section .data
    hello db 'Hello, World!',0

section .text
    global _start

_start:
    ; Write "Hello, World!" to stdout
    mov eax, 4          ; syscall number for sys_write
    mov ebx, 1          ; file descriptor 1 (stdout)
    mov ecx, hello      ; pointer to the string
    mov edx, 13         ; length of the string
    int 0x80            ; make the syscall

    ; Exit the program
    mov eax, 1          ; syscall number for sys_exit
    xor ebx, ebx        ; return code 0
    int 0x80            ; make the syscall
