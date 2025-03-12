#include <stdio.h>
#include <stdint.h>

void print_binary(uint32_t num) { //num을 이진 표현을 출력하는 정수 
	for (int i = 31; i >= 0; i--) { // 32비트 변수의 각 비트를 확인
		printf("%c", (num & (1 << i)) ? '1' : '0'); //해당 비트가 1이면 '1'을 출력, 아니면 '0'을 출력
	}
	printf("\n");
}
int main()
{
	int num;

	printf("정수를 입력하시오 : "); //사용자로부터 정수를 입력받음
	scanf_s("%d", & num);

	uint32_t ones = ~num;

	printf("입력된 정수의 32비트 표현 :  ");  //입력된 정수의 32비트 표현 출력 
	print_binary((uint32_t)num);
	



	return 0;

}