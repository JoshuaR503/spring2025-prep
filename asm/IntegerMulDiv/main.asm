.386
.model flat, c
.code

;Return: 0 Error(Division by zero)
;	   : 1 Success
; Computation *prod = a*b
;			  *quo = a/b
;			  *rem = a & b

IntegerMulDiv proc 
	
	push ebp
	mov ebp, esp
	push ebx

	xor eax, eax

	mov ecx, [ebp+8] ;ecx = "a"
	mov edx, [ebp+12] ;edx = "b"

	or edx, edx
	jz InvalidDivisor

	imul edx, ecx		;edx = "a" * "b";

	mov ebx, [ebp+16] ;ebx = "pod"
	mov [ebx], edx

	mov eax, ecx	;eax="a"
	cdq

	idiv dword ptr[ebp+12]
	
	mov ebx, [ebp+20]
	mov [ebx], eax
	mov ebx, [ebp+24]
	mov [ebx], edx
	mov eax, 1

InvalidDivisor:
	pop ebx
	pop ebp
	ret

IntegerMulDiv endp
end

