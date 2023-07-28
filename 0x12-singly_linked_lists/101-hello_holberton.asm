section .data
hello:		db "Hello, Main",10,0
format:		db "%s",0

	    section .text
	    global main
	    extern printf

main:
	    push rbp
	    mov rbp, rsp

	    mov rsi, hello
	    move rdi, format
	    call printf

	    pop rbp
	    mov rax, 0
	    rev
