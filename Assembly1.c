int main()
{
	__asm {
		push ebp
		mov ebp, esp 

		mov eax, 12345678h //eax�������Ϳ� �� ����
		push eax    //stack�� push
		mov ecx, 11223344h  //ecs���ý��Ϳ� �� ����
		push ecx  //stack�� push

		mov ebx, dword ptr[ebp-4]  
		   //stack�� push �� �� ��� ����
		mov esp,ebp   
		pop ebp 
	}
	return 0;
}