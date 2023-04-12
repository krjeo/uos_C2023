# include <stdio.h>

int main(void) {

	double num1, num2;
	int num3;
	int num4;

	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num1);
	getchar();

	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num2);
	getchar();

	printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);

	printf("\n숫자 1 입력 : ");
	scanf_s("%d", &num3);
	getchar();

	printf("숫자 2 입력 : ");
	scanf_s("%d", &num4);
	getchar();

	printf("몫 : %d, 나머지 : %d", num3 / num4, num3 % num4);

}