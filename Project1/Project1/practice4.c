# include <stdio.h>

int main(void) {

	char name[10];
	char dept[30];
	int birthday;

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	getchar();

	printf("�а��� �Է��ϼ��� : ");
	scanf_s("%s", dept, sizeof(dept));
	getchar();

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &birthday);

	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", dept);
	printf("���� : %d", birthday);

}