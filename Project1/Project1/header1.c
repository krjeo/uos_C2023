#include <stdio.h>
#include <math.h>

int GCD_param(int num1, int num2) {

	int a, b;

	if (num1 > num2) {
		a = num1;
		b = num2;
	}
	else {
		a = num2;
		b = num1;
	}

	while (1) {
		int remainder = a % b;
		if (remainder == 0) {
			printf("�ִ������� %d\n", b);
			return b;
		}
		a = b;
		b = remainder;
	}

}

int GCD_input(void) {

	int num1, num2;

	printf("ù ��° ������ �Է��ϼ���: ");
	scanf_s("%d", &num1);

	printf("�� ��° ������ �Է��Ἴ��: ");
	scanf_s(" %d", &num2);

	return GCD_param(num1, num2);

}

int LCM_param(int num1, int num2) {

	int gcd = GCD_param(num1, num2);
	int lcm = num1 * num2 / gcd;

	printf("�ּҰ������ %d\n", lcm);
	return lcm;

}

int LCM_input(void) {

	int num1, num2;

	printf("ù ��° ������ �Է��ϼ���: ");
	scanf_s("%d", &num1);

	printf("�� ��° ������ �Է��ϼ���: ");
	scanf_s(" %d", &num2);

	return LCM_param(num1, num2);

}

int is_prime_param(int num) {

	int n = sqrt(num);

	for (int i = 2; i <= n + 1; i++) {
		if (num % i == 0) {
			printf("�� ���� �Ҽ��� �ƴմϴ�");
			return 0;
		}
	}

	printf("�� ���� �Ҽ��Դϴ�");
	return 1;

}

int is_prime_input(void) {

	int num;

	printf("�Ҽ� �Ǻ��� �ϰ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	return is_prime_param(num);

}