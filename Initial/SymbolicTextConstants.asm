;Description:
;Name: Lucas Marchesani
;Creation:
;Date Finished:
;Revised:

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
string1 BYTE "HELLO GENERAL KENOBI"
.code
main PROC
	;code goes here
	INVOKE ExitProcess,0
main ENDP
;any additional stuff here
END main