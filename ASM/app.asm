section .bss  ; variables

section .data ; constants
    hello: db "Hi Mom!",10 ; define byte
    helloLen: equ $-hello ;length of str
section .text
  global _start ;entry point

  _start:         ;start here
    mov rax,1     ;sys_write  
    mov rdi,1     ; stdout
    mov rsi,hello
    mov rdx,helloLen
    syscall

    ;end program
    mov rax,60    ;sys_exit
    mov rdi,0     ; errorcode 0
    syscall
