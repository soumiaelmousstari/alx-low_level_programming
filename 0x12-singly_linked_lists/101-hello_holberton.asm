section .data
	msg db "Hello, Holberton", 0
	newline db 10, 0
section .text
	global main
	extern printf
main:
	mov r, msg
	call printf
	xor r, r
	ret
