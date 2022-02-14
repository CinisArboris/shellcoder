;=================================================================================
;sec_push.asm
;nasm -f win32 -o sec_push.o sec_push.asm -l sec_push.lst
;gcc -o sec_push.exe sec_push.o
;=================================================================================
extern _printf, _scanf, _gets, _strlen


segment .data
mensaje db "ingrese cadena: ",0


segment .bss
    mensaje1 resb 100
    mensaje2 resb 100


segment .text
    global _main

_main:
    xor eax, eax
    push eax
    push eax
    push eax
    ret
; =================================================================================
;..........subrutina....................