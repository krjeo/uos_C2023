#include <stdio.h>
#include "header1.h"

void base_transform(int num, int base) {

	if (num == 0) return;

	int quotient = num / base;
	int remainder = num % base;

	base_transform(quotient, base);

	if (remainder < 10) printf("%d", remainder);
	else printf("%c", 'A' + (remainder - 10));

}

int main(void) {

	int num, base;

	printf("변환할 10진수 입력 : ");
	scanf_s("%d", &num);

	printf("변환할 진법 입력 (2-16): ");
	scanf_s("%d", &base);

	printf("%d의 %d진수 변환 값 : ", num, base);
	base_transform(num, base);


}