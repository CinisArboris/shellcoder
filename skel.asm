; =================================================================================
;default.asm
;nasm -f win32 -o default.o default.asm -l default.lst
;gcc -o default.exe default.o
; =================================================================================
extern _printf, _scanf, _gets, _strlen


segment .data
mensaje db "ingrese cadena: ",0


segment .bss
mensaje1 resb 100
mensaje2 resb 100


segment .text


global _main
_main:
;---------------------------------------
xor eax, eax
push eax
push eax
push eax
ret
; =================================================================================
;..........subrutina....................