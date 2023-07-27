section .data
    format db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    mov edi, format     ; First argument: format string
    xor eax, eax        ; Clear EAX (EAX=0 is the syscall number for sys_exit)
    call printf         ; Call the C printf function

    mov eax, 0          ; Return 0 (exit status 0)
    ret                 ; Return from the main function
