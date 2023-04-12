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

	printf("��ȯ�� 10���� �Է� : ");
	scanf_s("%d", &num);

	printf("��ȯ�� ���� �Է� (2-16): ");
	scanf_s("%d", &base);

	printf("%d�� %d���� ��ȯ �� : ", num, base);
	base_transform(num, base);


}