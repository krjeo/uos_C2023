# include <stdio.h>

int main(void) {

	double num1, num2;
	int num3;
	int num4;

	printf("���� 1 �Է� : ");
	scanf_s("%lf", &num1);
	getchar();

	printf("���� 2 �Է� : ");
	scanf_s("%lf", &num2);
	getchar();

	printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);

	printf("\n���� 1 �Է� : ");
	scanf_s("%d", &num3);
	getchar();

	printf("���� 2 �Է� : ");
	scanf_s("%d", &num4);
	getchar();

	printf("�� : %d, ������ : %d", num3 / num4, num3 % num4);

}