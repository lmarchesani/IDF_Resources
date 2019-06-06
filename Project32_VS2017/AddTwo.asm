.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

INCLUDE Irvine32.inc
.data
prompt1 BYTE "Enter the low value for the range: ", 0
prompt2 BYTE "Enter the high number for the range: ", 0
prompt3 BYTE "The random number is: ", 0
low1	DWORD ?
high1	DWORD ?


.code
main PROC
CALL Clrscr
MOV  dl,35  ;column
MOV  dh,15  ;row
CALL Gotoxy
MOV	edx,OFFSET prompt1
CALL	WriteString
CALL	ReadInt			; input the integer
MOV	low1,eax				; save in a variable
CALL Clrscr
		
MOV  dl,35  ;column
MOV  dh,15  ;row
CALL Gotoxy
MOV	edx,OFFSET prompt2
CALL	WriteString
CALL	ReadInt			; input the integer
MOV	high1,eax			; save in a variable
CALL Clrscr
        
MOV eax,low1
MOV ebx,high1

PUSH eax				; doesn't change range
PUSH ebx

CALL BetterRandomRange

POP ebx
POP eax

CALL WaitMsg
exit
main ENDP

BetterRandomRange PROC
SUB ebx, eax        ;MOV 400 to ebx
XCHG ebx, eax        ;random works with eax
CALL RandomRange    ; generate random int
NEG ebx               
SUB eax, ebx        ;sub 300 from eax to define range
CALL WriteInt        ; write signed decimal
CALL Crlf
RET
BetterRandomRange ENDP

END main
