;Description:
;Name: Lucas Marchesani
;Creation: 4/8/19
;Date Finished: 4/8/19
;Revised:

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode: DWORD
.data
valA DB 100
valB DB 100
valC DB 100
valD DB 100
sum DB ?
.code
main PROC
	;store everything in the correct registars
	mov eax, valA
	mov ebx, valB
	mov ecx, valC
	mov edx, valD
		;now doing some fancy math
		add eax, val2
		add ecx, val4
		sub eax, val3
		mov sum, eax
	INVOKE ExitProcess,0
main ENDP
END main