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
			printf("최대공약수는 %d\n", b);
			return b;
		}
		a = b;
		b = remainder;
	}

}

int GCD_input(void) {

	int num1, num2;

	printf("첫 번째 정수를 입력하세요: ");
	scanf_s("%d", &num1);

	printf("두 번째 정수를 입력햐세요: ");
	scanf_s(" %d", &num2);

	return GCD_param(num1, num2);

}

int LCM_param(int num1, int num2) {

	int gcd = GCD_param(num1, num2);
	int lcm = num1 * num2 / gcd;

	printf("최소공배수는 %d\n", lcm);
	return lcm;

}

int LCM_input(void) {

	int num1, num2;

	printf("첫 번째 정수를 입력하세요: ");
	scanf_s("%d", &num1);

	printf("두 번째 정수를 입력하세요: ");
	scanf_s(" %d", &num2);

	return LCM_param(num1, num2);

}

int is_prime_param(int num) {

	int n = sqrt(num);

	for (int i = 2; i <= n + 1; i++) {
		if (num % i == 0) {
			printf("이 수는 소수가 아닙니다");
			return 0;
		}
	}

	printf("이 수는 소수입니다");
	return 1;

}

int is_prime_input(void) {

	int num;

	printf("소수 판별을 하고싶은 정수를 입력하세요: ");
	scanf_s("%d", &num);

	return is_prime_param(num);

}