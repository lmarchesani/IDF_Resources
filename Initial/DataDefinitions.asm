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
val WORD Ah
val2 SWORD F6h
val3 DWORD AAAAAh
val4 SDWORD -AAAh
.code
main PROC
	;code goes here
	INVOKE ExitProcess,0
main ENDP
;any additional stuff here
END main