int main()
{
	__asm {
		push ebp
		mov ebp, esp 

		mov eax, 12345678h //eax레지스터에 값 복사
		push eax    //stack에 push
		mov ecx, 11223344h  //ecs레시스터에 값 복사
		push ecx  //stack에 push

		mov ebx, dword ptr[ebp-4]  
		   //stack에 push 된 값 모두 제거
		mov esp,ebp   
		pop ebp 
	}
	return 0;
}