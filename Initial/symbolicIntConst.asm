;Description:
;Name: Lucas Marchesani
;Creation:4/8/19
;Date Finished:/8/19
;Revised:

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
	Sun=0
    Mon=1
    Tue=2
    Wed=3
    Thu=4
    Fri=5
    Sat=6
    days BYTE Sun, Mon, Tue, Wed, Thu, Fri, Sat
.code
main PROC
	;code goes here
	INVOKE ExitProcess,0
main ENDP
;any additional stuff here
END main